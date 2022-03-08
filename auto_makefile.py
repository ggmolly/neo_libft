from glob import glob
from pprint import pprint
from colorama import Fore, Style
import os

template = """NAME = libft.a

SRCS =  ---srcs---

OBJS := ${SRCS:.c=.o}

CC = clang

RM = rm -f

INC_DIR = includes

CFLAGS =  -Wall -Wextra -Werror -O2

.c.o:
	${CC} ${CFLAGS} -c -I ${INC_DIR} $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): ${OBJS}
	ar rcs $(NAME) ${OBJS}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} $(NAME)

re: fclean all

.PHONY: all clean fclean re"""

folders = []

for i in os.scandir("."):
	if i.is_dir():
		folders.append(i.name)

folders.remove(".vscode")
folders.remove(".git")

print("Generating Makefile form folders :" + Fore.LIGHTMAGENTA_EX)
print("\t- " + "\n\t- ".join(folders))

srcs = []
for i in folders:
	srcs.extend(glob(i + "/*.c"))

print(Fore.LIGHTGREEN_EX + "{} source files found".format(len(srcs)))

source_string = ""
for index, source_path in enumerate(srcs):
	if index == 0:
		source_string += source_path + " \\"
	else:
		source_string += "\n\t\t" + source_path + " \\"

template = template.replace("---srcs---", source_string)

with open("Makefile", "w") as f:
	f.write(template)
print(Fore.LIGHTGREEN_EX + "Makefile generated")