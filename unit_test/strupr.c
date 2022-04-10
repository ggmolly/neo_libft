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

	ft_strupr(test1);
	ft_strupr(test2);
	ft_strupr(test3);
	ft_strupr(test4);
	ft_strupr(test5);
	ft_strupr(test6);
	ft_strupr(test7);
	ft_strupr(test8);
	ft_strupr(test9);
	ft_strupr(test10);
	ft_strupr(test11);
	ft_strupr(test12);

	check(test1, "ABCDEF");
	check(test2, "ABCDEF");
	check(test3, "");
	check(test4, "ABCDEFABC");
	check(test5, "123456789ABC123456789");
	check(test6, "123456789ABC123456789");
	check(test7, "-ABC-");
	check(test8, "-ABC-");
	check(test9, "\t-ABC-\t");
	check(test10,"\tABC\t");
	check(test11,"\t0\t");
	check(test12,"                 ABC");
	return (0);
}