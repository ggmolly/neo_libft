//../strings/ft_swapcase.c

#include <stdio.h>
#include <string.h>
#include "includes/string.h"

void check(char *got, char *expected)
{
	if (strcmp(got, expected) == 0)
		printf("P");
	else
		printf("F");
}

int main(void)
{
	char test1[] = "Hello World";
	char test2[] = "HELLO WORLD";
	char test3[] = "";
	char test4[] = "1234567890";
	char test5[] = "AbCdEfGhIjKlMnOpQrStUvWxYz";
	char test6[] = "aBcDeFgHiJkLmNoPqRsTuVwXyZ";
	char test7[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";

	ft_swapcase(test1);
	ft_swapcase(test2);
	ft_swapcase(test3);
	ft_swapcase(test4);
	ft_swapcase(test5);
	ft_swapcase(test6);
	ft_swapcase(test7);

	check(test1, "hELLO wORLD");
	check(test2, "hello world");
	check(test3, "");
	check(test4, "1234567890");
	check(test5, "aBcDeFgHiJkLmNoPqRsTuVwXyZ");
	check(test6, "AbCdEfGhIjKlMnOpQrStUvWxYz");
	check(test7, "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz");
	return (0);
}