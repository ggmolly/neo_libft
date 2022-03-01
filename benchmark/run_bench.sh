#!/bin/bash

rm -rf O0_builds 2> /dev/null
rm -rf O2_builds 2> /dev/null
rm -rf O3_builds 2> /dev/null
rm -rf Ofast_builds 2> /dev/null

mkdir O0_builds
mkdir O2_builds
mkdir O3_builds
mkdir Ofast_builds

benchmark_files=$(ls bench_*.c)
libs=$(ls neo_libft*.a)
echo Available libs are:
for lib in $libs; do
	echo - $lib | cut -d'.' -f1
done

# build each benchmark with each library
for bench in $benchmark_files; do
	for lib in $libs; do
		echo "Building $bench with $lib"
		output_name=$(echo $bench | cut -d'.' -f1)
		# check if name contains O0, O2, O3 or Ofast
		if [[ $lib == *"O0"* ]]; then
			gcc -O0 $bench -o O0_builds/$output_name $lib
		elif [[ $lib == *"O2"* ]]; then
			gcc -O2 $bench -o O2_builds/$output_name $lib
		elif [[ $lib == *"O3"* ]]; then
			gcc -O3 $bench -o O3_builds/$output_name $lib
		elif [[ $lib == *"Ofast"* ]]; then
			gcc -Ofast $bench -o Ofast_builds/$output_name $lib
		fi
			
	done
done

# print a fancy ANSI separator
echo -e "\e[1;31m============================================================\e[0m"

# Run benchmark using hyperfine
rm -rf results 2> /dev/null
mkdir results

# For each files in O0, O2, O3 and Ofast_builds
optimizations=(O0 O2 O3 Ofast)
for bench in $(ls O0_builds); do
	bench_name=$(echo $bench | sed 's/bench_//g')
	for opt in ${optimizations[@]}; do
		echo -e "\e[1;32m$bench_name\e[0m \e[1;37m--\e[0m \e[1;35m$opt\e[0m"
		# read profiles/bench_name.txt, they're separated by ,
		profiles=$(cat profiles/$bench_name.txt | tr ',' ' ')
		for profile in $profiles; do
			binary_cmd="${opt}_builds/bench_${bench_name} ${profile}"
			args="--warmup 10 -r 5000 --time-unit millisecond --export-json results/${bench_name}_${opt}_${profile}.json"
			# binary_cmd has spaces in it, so we need to wrap it in quotes
			hyperfine $args "$binary_cmd" > /dev/null 2>&1
		done
	done
done

echo -e "\e[1;31m============================================================\e[0m"
echo "Done running benchmarks, cleaning up binaries"

# Remove build folders
rm -rf O0_builds 2> /dev/null
rm -rf O2_builds 2> /dev/null
rm -rf O3_builds 2> /dev/null
rm -rf Ofast_builds 2> /dev/null