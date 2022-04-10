//../strigs/ft_capitalize.c

#include "includes/string.h"
#include <stdio.h>
#include <string.h>

void check(char *got, char *expected)
{
	if (strcmp(got, expected) == 0)
		printf("P");
	else
		printf("F");
}

int main(void)
{
	char test1[] = "hello world";
	char test2[] = "hELLO WORLD";
	char test3[] = "HELLO WORLD";
	char test4[] = "Bonjour a tous";
	char test5[] = "ceci est une phrase";
	char test6[] = "";
	char test7[] = "---------test--------";
	char test8[] = "ceci-est-un-test.";

	ft_capitalize(test1);
	ft_capitalize(test2);
	ft_capitalize(test3);
	ft_capitalize(test4);
	ft_capitalize(test5);
	ft_capitalize(test6);
	ft_capitalize(test7);
	ft_capitalize(test8);

	check(test1, "Hello World");
	check(test2, "Hello World");
	check(test3, "Hello World");
	check(test4, "Bonjour A Tous");
	check(test5, "Ceci Est Une Phrase");
	check(test6, "");
	check(test7, "---------Test--------");
	check(test8, "Ceci-Est-Un-Test.");
	return (0);
}