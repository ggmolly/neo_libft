#!/bin/bash

# set -e # Exit immediately if a command exits with a non-zero status.

folders="assert chartype conversions ft_printf includes lists math memory put sort strings"
# Find all C files in the folders
files=""
for folder in $folders; do
	files="$files $(find $folder -name '*.c')"
done
echo "Compiling $(echo $files | wc -w) files"

rm -rf benchmark/obj 2> /dev/null
rm benchmark/*.a 2> /dev/null
mkdir benchmark/obj

# Build without optimization
for file in $files; do
	echo "Compiling $file (-O0)"
	gcc -Wall -Wextra -Werror -O0 -g -c $file -o benchmark/obj/$(basename $file .c).o
done

ar rc benchmark/neo_libft_O0.a benchmark/obj/*.o
rm benchmark/obj/*.o 2> /dev/null

for file in $files; do
	echo "Compiling $file (-O2)"
	gcc -Wall -Wextra -Werror -O2 -g -c $file -o benchmark/obj/$(basename $file .c).o
done
ar rc benchmark/neo_libft_O2.a benchmark/obj/*.o
rm benchmark/obj/*.o 2> /dev/null

for file in $files; do
	echo "Compiling $file (-O3)"
	gcc -Wall -Wextra -Werror -O3 -g -c $file -o benchmark/obj/$(basename $file .c).o
done
ar rc benchmark/neo_libft_O3.a benchmark/obj/*.o
rm benchmark/obj/*.o 2> /dev/null

for file in $files; do
	echo "Compiling $file (-Ofast)"
	gcc -Wall -Wextra -Werror -Ofast -g -c $file -o benchmark/obj/$(basename $file .c).o
done
ar rc benchmark/neo_libft_Ofast.a benchmark/obj/*.o
rm benchmark/obj/*.o 2> /dev/null