//../strings/ft_count_words.c

#include <stdio.h>
#include "includes/string.h"

void check(int expected, int got)
{
	if (expected == got)
		printf("P");
	else
		printf("F");
}

int main(void)
{
	check(ft_count_words("Hello world", "Hello"), 1);
	check(ft_count_words("Hello world", "world"), 1);
	check(ft_count_words("Hello world", "HELLO"), 0);
	check(ft_count_words("Hello world", "wORLD"), 0);
	check(ft_count_words("Hello world", " "), 1);
	check(ft_count_words("Hello    world", " "), 4);
	check(ft_count_words("Hello WORLD", "Hello WORLD"), 1);
	check(ft_count_words("world world world world world WORLD world world", "world"), 7);
	check(ft_count_words("", "Test"), 0);
	check(ft_count_words("ABCDEFabcdef", "a"), 1);
	check(ft_count_words("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "A"), 33);
	return (0);
}