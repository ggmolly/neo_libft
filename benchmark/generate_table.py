import json
import subprocess
import os
from datetime import datetime
from glob import glob
from colorama import Fore, Style

ROUND_TIMINGS = 6

results = glob("results/*.json")
print(Fore.LIGHTMAGENTA_EX + "Parsing : {} files".format(len(results)))
current_datetime = datetime.now().strftime("%Y-%m-%d_%H-%M-%S")
markdown_table = open("benchmark_{}.md".format(current_datetime), "a+")

cols = ["Test name",
		"Commit",
		"Function",
		"Re-runs",
		"GCC Optimizer",
		"Avg. Execution time",
		"Min. Execution time",
		"Max. Execution time",
		"Passed"]

def genereate_header(cols):
	output = "|".join(cols) + "\n"
	alignements = [":---:"] * len(cols)
	output += "|" + "|".join(alignements)
	return output + "\n"

def generate_row(name, commit, function, re_runs, optimizer, avg, min, max, crashed) -> str:
	markdown_table.write("|".join([name, commit, function,
		str(re_runs), optimizer, 
		str(round(avg, ROUND_TIMINGS)) + " ms", str(round(min, ROUND_TIMINGS)) + " ms",
		str(round(max, ROUND_TIMINGS)) + " ms", crashed]) + "\n")
	

def has_crashed(benchmark_data: dict) -> bool:
	return sum(benchmark_data["exit_codes"]) > 0

def test_summary(benchmark_data: dict) -> tuple:
	command = benchmark_data["command"]
	opt = command.split("_")[0]
	function = command.split("bench_")[1].split(" ")[0]
	profile = command.split(" ")[-1]
	return opt, function, profile

def timings(benchmark_data: dict) -> tuple:
	min, max, avg = benchmark_data["min"], benchmark_data["max"], benchmark_data["mean"]
	return min, max, avg

def find_path(func: str) -> str:
	candidates = glob("../*/**.c", recursive=True)
	for candidate in candidates:
		name = os.path.basename(candidate)
		if name == func + ".c":
			return candidate

markdown_table.write(genereate_header(cols))
for results_file in results:
	with open(results_file) as f:
		data = json.load(f)["results"][0]
	print(Fore.LIGHTMAGENTA_EX + "Parsing : {}".format(results_file))
	optimizer, func, profile = test_summary(data)
	min, max, avg = timings(data)
	path = find_path(func)
	commit = subprocess.check_output(["git", "log", "-1", "--pretty=%H", path]).decode("utf-8").strip()[:7]
	success = "✅" if not has_crashed(data) else "❌"
	generate_row("{} {} {}".format(func, optimizer, profile), commit, func, len(data["times"]), optimizer, avg, min, max, success)