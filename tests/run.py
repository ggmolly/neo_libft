from colorama import Fore, Style
from glob import glob
import subprocess
import os
import sys
import traceback

tests = ["memory",
	"conversions",
	"chartype",
	"strcat",
	"strset",
	"swapcase",
	"capitalize",
	"zfill",
	"strip",
	"startswith",
	"endswith",
	"split",
    "center",
	"chained_lst",
	"all"]

def run_tests(name: str):
	binary = name + "_tests"
	# args = ["gcc", "-Wall", "-Wextra", "-Werror", "-g3", "-o", binary, "./src/" + name + "_tests.c"]
	args = ["gcc", "-g3", "-o", binary, "./src/" + name + "_tests.c"]
	args.extend(glob("../" + name + "/*.c"))
	# args.extend(glob("../assert/*.c"))
	# args.extend(glob("../strings/*.c"))
	# args.extend(glob("../memory/*.c"))
	# args.extend(glob("../conversions/*.c"))
	# args.extend(glob("../chartype/*.c"))

	# if name in ["strcat", "strset"]:
	# 	args.extend(glob("../put/*.c"))
	# if "lst" in name:
	# 	args.extend(glob("../lists/*.c"))
	args.extend(glob("../*/*.c"))
	args = list(dict.fromkeys(args))
	print(Fore.LIGHTYELLOW_EX + f"Compiling {len(args) - 10} files...", end="\r")
	try:
		subprocess.check_call(args)
		print(Fore.LIGHTGREEN_EX + name + " test compiled successfully!" + Style.RESET_ALL)
	except:
		print(Fore.LIGHTRED_EX + name + " test failed to compile!" + Style.RESET_ALL)
		print(Fore.LIGHTMAGENTA_EX + " ".join(args) + Style.RESET_ALL)
	try:
		subprocess.check_call(["./" + binary])
		print(Fore.LIGHTGREEN_EX + name + " test ran successfully!" + Style.RESET_ALL)
	except:
		if "SIGSEGV" in str(traceback.format_exc()):
			print(Fore.LIGHTRED_EX + name + " test has crashed (SIGSEGV)!" + Style.RESET_ALL)
			return
		elif "SIGABRT" in str(traceback.format_exc()):
			print(Fore.LIGHTRED_EX + name + " test has crashed (SIGABRT)!" + Style.RESET_ALL)
			return
		print(Fore.LIGHTRED_EX + name + " test failed to run!" + Style.RESET_ALL)
	print(Fore.LIGHTYELLOW_EX + "Checking for leaks..." + Style.RESET_ALL, end="\r")
	try:
		stdout, stderr = subprocess.Popen(["valgrind", "--leak-check=full", "./" + binary], stdout=subprocess.PIPE, stderr=subprocess.PIPE).communicate()
		# Check if stderr or stdout contains "no leaks"
		if "no leaks" in stdout.decode() or "no leaks" in stderr.decode():
			print(Fore.LIGHTGREEN_EX + "No leaks were found!    " + Style.RESET_ALL)
		else:
			print(Fore.LIGHTRED_EX + "Leaks were found!    " + Style.RESET_ALL)
	except:
		print(Fore.LIGHTRED_EX + "Failed to run Valgrind!" + Style.RESET_ALL)
	if len(sys.argv) == 1:
		os.remove(binary)
print(Fore.LIGHTGREEN_EX + "Welcome to neo_libft tests !" + Style.RESET_ALL)
tests.append("exit")
for index, test in enumerate(tests):
	print(Fore.LIGHTMAGENTA_EX + "{}: ".format(index) + Fore.LIGHTYELLOW_EX + test + Style.RESET_ALL)

run = tests[int(input("Choose a test: "))]
if run == "exit":
	exit(0)
if run == "all":
	tests.pop()
	for test in tests:
		print(Fore.LIGHTMAGENTA_EX + "-" * 15 + " " + test + " " + "-" * 15 + Style.RESET_ALL)
		run_tests(test)
else:
	run_tests(run)
