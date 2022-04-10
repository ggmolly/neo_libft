//../conversions/ft_atol.c

#include <stdio.h>
#include <limits.h>
#include "includes/conversions.h"

void check(char *s, long expected)
{
	long i = ft_atol(s);
	if (i == expected)
		printf("P");
	else
		printf("F");
}

int main(void)
{
	char	*test1 = "0123456789";
	char	*test2 = "1";
	char	*test3 = "2147483647";
	char	*test4 = "-2147483648";
	char	*test5 = "46478";
	char	*test6 = "42";
	char	*test7 = "1337";
	char	*test8 = "-42";
	char	*test9 = "-1337";
	char	*test10 = "00000001";
	char	*test11 = "00000000000000000000000000000000000000000000000000001";
	char	*test12 = "+1";
	char	*test13 = "-1";
	char	*test14 = "-0";
	char	*test15 = "+0";
	char	*test16 = "000000000000000000000000000000000000000000";
	// atol tests
	char	*test17 = "-9223372036854775808";
	char	*test18 = "9223372036854775807";
	char	*test19 = "80000000000000000";
	char	*test20 = "-80000000000000000";
	check(test1, 123456789);
	check(test2, 1);
	check(test3, 2147483647);
	check(test4, -2147483648);
	check(test5, 46478);
	check(test6, 42);
	check(test7, 1337);
	check(test8, -42);
	check(test9, -1337);
	check(test10, 1);
	check(test11, 1);
	check(test12, 1);
	check(test13, -1);
	check(test14, 0);
	check(test15, 0);
	check(test16, 0);
	// atol tests
	check(test18, 9223372036854775807L);
	check(test19, 80000000000000000L);
	check(test20, -80000000000000000L);
	return (0);
}