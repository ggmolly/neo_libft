//../conversions/ft_strcase.c

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
	char test1[] = "ABCDEF";
	char test2[] = "abcdef";
	char test3[] = "";
	char test4[] = "ABCdefabc";
	char test5[] = "123456789abc123456789";
	char test6[] = "123456789aBc123456789";
	char test7[] = "-abc-";
	char test8[] = "-ABC-";
	char test9[] = "\t-ABC-\t";
	char test10[] = "\tABC\t";
	char test11[] = "\t0\t";
	char test12[] = "                 abc";

	ft_strlwr(test1);
	ft_strlwr(test2);
	ft_strlwr(test3);
	ft_strlwr(test4);
	ft_strlwr(test5);
	ft_strlwr(test6);
	ft_strlwr(test7);
	ft_strlwr(test8);
	ft_strlwr(test9);
	ft_strlwr(test10);
	ft_strlwr(test11);
	ft_strlwr(test12);

	check(test1, "abcdef");
	check(test2, "abcdef");
	check(test3, "");
	check(test4, "abcdefabc");
	check(test5, "123456789abc123456789");
	check(test6, "123456789abc123456789");
	check(test7, "-abc-");
	check(test8, "-abc-");
	check(test9, "\t-abc-\t");
	check(test10,"\tabc\t");
	check(test11,"\t0\t");
	check(test12,"                 abc");
	return (0);
}