//../conversions/ft_itoa.c

#include <stdio.h>
#include <string.h>
#include "includes/conversions.h"
#include "includes/memory.h"

void check(int i, char *expected)
{
	char *s = ft_itoa(i);
	if (strcmp(expected, s) == 0)
		printf("P");
	else
		printf("F");
	ft_free(&s);
}

int main(void)
{
	int	test1 = 123456789;
	int	test2 = 1;
	int	test3 = 2147483647;
	int	test4 = -2147483648;
	int	test5 = 46478;
	int	test6 = 42;
	int	test7 = 1337;
	int	test8 = -42;
	int	test9 = -1337;
	int	test10 = 00000001;
	int	test11 = 00000000000000000000000000000000000000000000000000001;
	int	test12 = +1;
	int	test13 = -1;
	int	test14 = -0;
	int	test15 = +0;
	int	test16 = 000000000000000000000000000000000000000000;

	check(test1, "123456789");
	check(test2, "1");
	check(test3, "2147483647");
	check(test4, "-2147483648");
	check(test5, "46478");
	check(test6, "42");
	check(test7, "1337");
	check(test8, "-42");
	check(test9, "-1337");
	check(test10, "1");
	check(test11, "1");
	check(test12, "1");
	check(test13, "-1");
	check(test14, "0");
	check(test15, "0");
	check(test16, "0");
	
	return (0);
}