import random
import string
import subprocess
import os
import sys
from glob import glob
from typing import List
# Constants
LIBFT_PATH="../libft.a"
COMPILER="clang"
COMPILER_FLAGS="-O2"
NORMINETTE_BIN="norminette"
CHARSET = string.ascii_letters + string.digits
RESULTS = {
	"X": {"meaning": "Compilation error", "color": "[38;5;160m", "character": "x"},
	"N": {"meaning": "Norm error", "color": "[38;5;167m", "character": "n"},
	"P": {"meaning": "Passed", "color": "[38;5;42m", "character": "p"},
	"F": {"meaning": "Failed", "color": "[38;5;164m", "character": "f"},
	"S": {"meaning": "Skipped", "color": "[38;5;208m", "character": "s"},
	"C": {"meaning": "Crash", "color": "[38;5;172m", "character": "c"},
	"?": {"meaning": "Unknown", "color": "[38;5;245m", "character": "?"},
}

def random_string(length=12):
	return ''.join(random.choice(CHARSET) for i in range(length))

def compile(path: str) -> str:
	"""
	Compiles the passed C source file
	:param path: path to the source file
	:return: path to the executable
	"""
	output = random_string(24)
	try:
		subprocess.check_call([COMPILER, COMPILER_FLAGS, path, LIBFT_PATH, "-o", output], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
		return output
	except:
		return None

def norm_check(path: str) -> bool:
	"""
	Check the passed C source file's norm
	:param path: path to the source file
	:return: True if the norm is correct, False otherwise
	"""
	# Read first line of path
	with open(path, "r") as f:
		src_file = f.readline()[2:].strip()
	try:
		subprocess.check_call([NORMINETTE_BIN, src_file], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
		return True
	except:
		return False

def check_leaks(path: str) -> bool:
	"""
	Check if the passed C source file leaks
	:param path: path to the compiled file
	:return: True if the file leaks, False otherwise
	"""
	p = subprocess.Popen(["valgrind", "--leak-check=full", "./" + path], stdout=subprocess.DEVNULL, stderr=subprocess.PIPE)
	_, err = p.communicate()
	return "All heap blocks were freed -- no leaks are possible" not in str(err)

def is_skipped(current_test: str) -> bool:
	"""
	Returns True or False if the test must be run or not
	:param current_test: the current test
	:param all_sources: List of all tests found
	:return: whether the test must be skipped or not
	"""
	if len(sys.argv[1:]) == 0:
		return False
	copy = sys.argv[1:]
	for i in range(len(copy)):
		copy[i] = copy[i].split('/')[-1]
	return not current_test in copy

def run_test(path: str, index: int, total: int, skip=False) -> tuple:
	"""
	Runs the passed C source file and print test summary
	:param path: path to the source file
	:param index: current test index
	:param total: total number of tests
	:return: tuple containing how many tests failed, passed, crashed
	"""
	fails, successes, crashes, leaking = 0, 0, 0, False
	if not norm_check(path):
		print(f"{RESULTS['N']['color']}{RESULTS['N']['character']}[1;0m")
		return (1, 0, 0, False)
	print("[38;5;14mCompiling : " + path + "[0m", end="\r")
	padding = " " * (13 - len(os.path.basename(path)))
	print("[K\r[38;5;14m[{}]".format(os.path.basename(path)) + f"[0m{padding}- ", end="")
	if skip:
		print(f"{RESULTS['S']['color']}{RESULTS['S']['character']}[1;0m")
		return (0, 0, 0, False)
	compiled_path = compile(path)
	if compiled_path is None:
		print(f"{RESULTS['X']['color']}{RESULTS['X']['character']}[1;0m")
		os.remove(compiled_path)
		return (1, 0, 0, False)
	compiled = "./" + compiled_path
	# Run compiled file and get STDOUT
	try:
		output = subprocess.check_output(compiled, stderr=subprocess.STDOUT).decode("utf-8").strip()
		for character in output:
			try:
				print(f"{RESULTS[character]['color']}{RESULTS[character]['character']}[1;0m", end="")
			except KeyError:
				print(f"{RESULTS['?']['color']}{RESULTS['?']['character']}[1;0m", end="")
			if character == "F":
				fails += 1
			elif character == "P":
				successes += 1
	except subprocess.CalledProcessError as e:
		print(f"{RESULTS['C']['color']}{RESULTS['C']['character']}[1;0m", end="")
		crashes += 1
	if check_leaks(compiled):
		print("[38;5;229mL", end="")
		output += "L"
		leaking = True
	padding = " " * (50 - len(output))
	print(padding + '[38;5;206m - [{}/{} - {:.2f}%][1;0m'.format(index, total, (index / total) * 100))
	os.remove(compiled)
	return fails, successes, crashes, leaking
if __name__ == '__main__':
	os.chdir("unit_test")
	print("[38;5;14m████████ ███████ ███████ ████████ ███████[1;0m")
	print("[38;5;206m   ██    ██      ██         ██    ██     [1;0m")
	print("[38;5;255m   ██    █████   ███████    ██    ███████[1;0m")
	print("[38;5;206m   ██    ██           ██    ██         ██[1;0m")
	print("[38;5;14m   ██    ███████ ███████    ██    ███████[1;0m")
	sources = glob("*.c")
	total = len(sources)
	fails, crashes, passed, leaking = 0, 0, 0, 0
	if total == 0:
		print("[38;5;208mNo test found[1;0m")
		exit(0)
	for index, source in enumerate(sources):
		fail, success, crash, leak = run_test(source, index + 1, total, skip=is_skipped(source))
		fails += fail
		crashes += crash
		passed += success
		leaking += int(leak)
	# Print summary
	print("[38;5;14mSummary :[1;0m")
	print("[38;5;206m{}[1;0m tests, {}{} failed, {}{} passed, {}{} crashes, {}{} leaks.[1;0m".format(
			total, RESULTS["F"]["color"], fails, RESULTS["P"]["color"], passed, RESULTS["C"]["color"], crashes, "[38;5;229m", leaking))