from colorama import Fore, Style
from glob import glob
import subprocess
import os

def run_tests(name: str):
	binary = name + "_tests"
	args = ["gcc", "-Wall", "-Wextra", "-Werror", "-g3", "-o", binary, "./src/" + name + "_tests.c"]
	args.extend(glob("../" + name + "/*.c"))
	if name == "conversions":
		args.extend(glob("../chartype/*.c"))
	if name != "memory":
		args.extend(glob("../memory/*.c"))
	if name in ["strcat", "strset"]:
		args.extend(glob("../strings/*.c"))
		args.extend(glob("../put/*.c"))
		
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
		print(Fore.LIGHTRED_EX + name + " test failed to run!" + Style.RESET_ALL)
	print(Fore.LIGHTYELLOW_EX + "Checking for leaks..." + Style.RESET_ALL)
	try:
		stdout, stderr = subprocess.Popen(["valgrind", "--leak-check=full", "./" + binary], stdout=subprocess.PIPE, stderr=subprocess.PIPE).communicate()
		# Check if stderr or stdout contains "no leaks"
		if "no leaks" in stdout.decode() or "no leaks" in stderr.decode():
			print(Fore.LIGHTGREEN_EX + "No leaks found!" + Style.RESET_ALL)
		else:
			print(Fore.LIGHTRED_EX + "Leaks found!" + Style.RESET_ALL)
	except:
		print(Fore.LIGHTRED_EX + "Failed to run Valgrind!" + Style.RESET_ALL)
	# os.remove(binary)
print(Fore.LIGHTGREEN_EX + "Welcome to neo_libft tests !" + Style.RESET_ALL)

tests = ["memory", "conversions", "chartype", "strcat", "strset", "all"]
for index, test in enumerate(tests):
	print(Fore.LIGHTMAGENTA_EX + "{}: ".format(index) + Fore.LIGHTYELLOW_EX + test + Style.RESET_ALL)

run = tests[int(input("Choose a test: "))]
if run == "all":
	tests.pop()
	for test in tests:
		print(Fore.LIGHTMAGENTA_EX + "-" * 15 + " " + test + " " + "-" * 15 + Style.RESET_ALL)
		run_tests(test)
else:
	run_tests(run)