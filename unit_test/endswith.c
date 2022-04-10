//../strings/ft_endswith.c

#include "includes/string.h"
#include <stdio.h>

void check(int got, int expected)
{
	if (got == expected)
		printf("P");
	else
		printf("F");
}

int main(void)
{
	char *test1 = "Hello World";
	char *test2 = "HELLO WORLD";
	char *test3 = "";
	char *test4 = "1234567890";
	char *test5 = "---AbCdEfGhIjKlMnOpQrStUvWxYz---";
	char *test6 = "\t\t\t\taaaaaaa\t\t\t\t";
	char *test7 = "\t\n\n\t";
	char *test8 = "                        9";
	char *test9 = "9                       ";

	check(ft_endswith(test1, "World"), 1);
	check(ft_endswith(test1, "world"), 0);
	check(ft_endswith(test1, ""), 1);
	check(ft_endswith(test1, "AAAAAAAAAAAAAAAAAAAAAAAA"), 0);

	check(ft_endswith(test2, " WORLD"), 1);
	check(ft_endswith(test2, "WORLD"), 1);
	check(ft_endswith(test2, "world"), 0);
	check(ft_endswith(test2, "World"), 0);
	check(ft_endswith(test2, ""), 1);
	check(ft_endswith(test2, "AAAAAAAAAAAAAAAAAAAAAAAA"), 0);

	check(ft_endswith(test3, ""), 1);
	check(ft_endswith(test3, "\0"), 1);
	check(ft_endswith(test3, "\n"), 0);
	check(ft_endswith(test3, " "), 0);
	check(ft_endswith(test3, "AAA"), 0);
	check(ft_endswith(test3, "    "), 0);

	check(ft_endswith(test4, ""), 1);
	check(ft_endswith(test4, "1234567890"), 1);
	check(ft_endswith(test4, "123456789"), 0);
	check(ft_endswith(test4, "67890"), 1);
	check(ft_endswith(test4, "1234567890"), 1);

	check(ft_endswith(test5, "z"), 0);
	check(ft_endswith(test5, "Z"), 0);
	check(ft_endswith(test5, "-"), 1);
	check(ft_endswith(test5, "--"), 1);
	check(ft_endswith(test5, "---"), 1);
	check(ft_endswith(test5, "z---"), 1);
	check(ft_endswith(test5, "Yz---"), 1);
	check(ft_endswith(test5, "yz---"), 0);

	check(ft_endswith(test6, "\t"), 1);
	check(ft_endswith(test6, "\t\t"), 1);
	check(ft_endswith(test6, "\t\t\t"), 1);
	check(ft_endswith(test6, "a\t\t\t"), 0);
	check(ft_endswith(test6, "aa\t\t\t"), 0);
	check(ft_endswith(test6, "aa\t\t\t\t"), 1);

	check(ft_endswith(test7, "\n"), 0);
	check(ft_endswith(test7, "\t"), 1);
	check(ft_endswith(test7, "\t\n\n\t"), 1);
	check(ft_endswith(test7, "\n\t"), 1);
	check(ft_endswith(test7, "\n\n\n\t"), 0);

	check(ft_endswith(test8, "9"), 1);
	check(ft_endswith(test8, "9 "), 0);
	check(ft_endswith(test8, " 9"), 1);

	check(ft_endswith(test9, "9"), 0);
	check(ft_endswith(test9, "9 "), 0);
	check(ft_endswith(test9, "     "), 1);
	return (0);
}
