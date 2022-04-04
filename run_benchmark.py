import os
import subprocess
import json
import sys
import random
import string
import re
import traceback

from typing import List
from colorama import Fore, Style
from glob import glob

FUNCTIONS_REGEX = re.compile(r"(?<=\{\{ANY:).+(?=\}\})")

available_benches = glob("*_bench.c")

if len(sys.argv) != 2:
	print(Fore.LIGHTRED_EX + "Usage: run_benchmark.py <benchmark_name>" + Style.RESET_ALL)
	print(Fore.LIGHTYELLOW_EX + "Available benchmarks:" + Style.RESET_ALL)
	for bench in available_benches:
		print(Fore.LIGHTMAGENTA_EX + "\t" + bench + Style.RESET_ALL)
	exit(1)

if sys.argv[1] not in available_benches:
	print(Fore.LIGHTRED_EX + "Benchmark not found!" + Style.RESET_ALL)
	print(Fore.LIGHTYELLOW_EX + "Available benchmarks:" + Style.RESET_ALL)
	for bench in available_benches:
		print(Fore.LIGHTMAGENTA_EX + "\t" + bench + Style.RESET_ALL)
	exit(1)

class BenchmarkResult:
	def __init__(self, name: str, times: List[float], min: float, max: float):
		self.name = name
		self.times = times
		self.min = min
		self.max = max
		self.avg = sum(times) / len(times)

def generate_table(results: List[BenchmarkResult]) -> str:
	"""
	Returns a ASCII formatted table based off all results
	:param results: The results to generate the table from.
	:return: The table (str).
	"""
	header = """
+--------------+--------+-------+--------------+--------------+-------------+
|  test_name   |     min (s)    |    max (s)   |   avg (s)    |   min (s)   |
+--------------+--------+-------+--------------+--------------+-------------+
"""
	for result in results:
		header += "| " + result.name.center(12) + " | " + str(round(result.min * 1000, 4)).center(14) + " | " + str(round(result.max * 1000, 4)).center(12) + " | " + str(round(result.avg * 1000, 4)).center(12) + " | " + str(round(result.min * 1000, 4)).center(11) + " |\n"
	header += "+--------------+--------+-------+--------------+--------------+-------------+\n"
	return header


def random_string(length: int = 12) -> str:
	return ''.join(random.choice(string.ascii_letters) for i in range(length))

def compile_code(file: str, output_name: str) -> bool:
	"""
	Compile file to output_name (used to track which function is benchmarked)
	:param file: The file to compile.
	:param output_name: The name of the output file.
	:return: Compilation status (bool).
	"""
	try:
		subprocess.check_call(["clang", "-O0", "-o", output_name, file, "libft.a"])
		return True
	except subprocess.CalledProcessError:
		return False

def write_code(code: str, function: str, output_file: str) -> None:
	"""
	Run code with tested function to 'output_file', replaces function to
	benchmark by 'function'
	:param code: The code to run.
	:param function: The function to benchmark.
	:param output_file: The output file.
	:return: None
	"""
	with open(output_file, "w+") as f:
		f.write(code.replace("$(FUNCTION)", function))

def get_functions(bench_code: str) -> List[str]:
	"""
	Find functions that are to be benchmarked in the given code.
	:param bench_code: The code to search for functions.
	:return: A list of functions to be benchmarked (str).
	"""
	match = FUNCTIONS_REGEX.search(bench_code)
	return match.group(0).split(",")

def clean_exit(summary: dict, code: int) -> None:
	"""
	Removes all potentially compiled files, and exit(code)
	:param summary: The summary of the benchmark.
	:param code: The exit code.
	:return: None
	"""
	for s in summary:
		if os.path.exists(s["binary"]):
			os.remove(s["binary"])
		if os.path.exists(s["temp_file"]):
			os.remove(s["temp_file"])
		if os.path.exists(s["json_data"]):
			os.remove(s["json_data"])
		
	exit(code)

with open(sys.argv[1], "r") as f:
	bench_code = f.read()

bench_functions = get_functions(bench_code)
# Replace {{ANY: xxx}} by $(FUNCTION)
bench_code = bench_code.replace("{{ANY:" + ",".join(bench_functions) + "}}", "$(FUNCTION)")
benchmark_summary = []

for test in bench_functions:
	benchmark_summary.append({
				"function": test,
				"temp_file": random_string() + ".c",
				"binary": random_string(),
				"json_data": random_string() + ".json"
			})

print(Fore.LIGHTMAGENTA_EX + "Benchmark summary : " + Fore.LIGHTGREEN_EX)

print(Fore.LIGHTYELLOW_EX + "Running benchmarks..." + Style.RESET_ALL)

for bench in benchmark_summary:
	write_code(bench_code, bench["function"], bench["temp_file"])
	if not compile_code(bench["temp_file"], bench["binary"]):
		print(Fore.LIGHTRED_EX + "Failed to compile " + bench["function"] + Style.RESET_ALL)
		clean_exit(benchmark_summary, 1)
	else:
		print(Fore.LIGHTGREEN_EX + "Compiled " + bench["function"] + Style.RESET_ALL, end="\r")
		# Run benchmark through hyperfine
		try:
			subprocess.check_call(["./hyperfine", "--runs", "5000", "-N", "-i", "./" + bench["binary"], "--export-json", bench["json_data"]], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
			print(Fore.LIGHTGREEN_EX + "Benchmark " + bench["function"] + " done" + Style.RESET_ALL)
		except subprocess.CalledProcessError:
			print(Fore.LIGHTRED_EX + "Failed to run " + bench["function"] + Style.RESET_ALL)
			clean_exit(benchmark_summary, 1)

print("\n" + Fore.LIGHTYELLOW_EX + "Parsing results..." + Style.RESET_ALL)
# Load each json files
results = []
for bench in benchmark_summary:
	try:
		with open(bench["json_data"], "r") as f:
			test_data = json.load(f)
		result = test_data["results"][0]
		name = bench["function"]
		if name.count("_") > 0:
			name = "_".join(bench["function"].split('_')[2:])
		else:
			name = bench["function"]
		results.append(BenchmarkResult(name, result["times"], result["min"], result["max"]))
	except:
		print(Fore.LIGHTRED_EX + "Failed to parse " + bench["json_data"] + Style.RESET_ALL)
		traceback.print_exc()
		clean_exit(benchmark_summary, 1)
print(generate_table(results))

# Get ranking
ranking = sorted(results, key=lambda x: x.avg)
for index, rank in enumerate(ranking):
	if index == 0:
		print(f"{Fore.LIGHTMAGENTA_EX}🏆 - {rank.name} : {rank.avg * 1000:.4f} s {Style.RESET_ALL}")
	elif index == 1:
		print(f"{Fore.LIGHTGREEN_EX}🥈 - {rank.name} : {rank.avg * 1000:.4f} s{Style.RESET_ALL}")
	elif index == 2:
		print(f"{Fore.LIGHTYELLOW_EX}🥉 - {rank.name} : {rank.avg * 1000:.4f} s{Style.RESET_ALL}")
	else:
		print(f"{Fore.LIGHTRED_EX}🎖️ - {rank.name} : {rank.avg * 1000:.4f} s{Style.RESET_ALL}")

clean_exit(benchmark_summary, 0)
clean_exit(benchmark_summary, 0)