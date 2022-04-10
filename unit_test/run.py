import random
import string
import subprocess
import os
from glob import glob

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
	try:
		subprocess.check_call(["valgrind", "--leak-check=full", "--error-exitcode=1", "./" + path], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
		return False
	except:
		return True

def run_test(path: str, index: int, total: int) -> tuple:
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
		return
	print("[38;5;14mCompiling : " + path + "[0m", end="\r")
	compiled = "./" + compile(path)
	padding = " " * (13 - len(os.path.basename(path)))
	print("[K\r[38;5;206m[{}]".format(os.path.basename(path)) + f"[0m{padding}- ", end="")
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
		fail, success, crash, leak = run_test(source, index + 1, total)
		fails += fail
		crashes += crash
		passed += success
		leaking += int(leak)
	# Print summary
	print("[38;5;14mSummary :[1;0m")
	print("[38;5;206m{}[1;0m tests, {}{} failed, {}{} passed, {}{} crashes, {}{} leaks.[1;0m".format(
			total, RESULTS["F"]["color"], fails, RESULTS["P"]["color"], passed, RESULTS["C"]["color"], crashes, "[38;5;229m", leaking))