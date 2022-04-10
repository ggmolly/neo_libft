//../strings/ft_startswith.c

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

	check(ft_startswith(test1, "Hello"), 1);
	check(ft_startswith(test1, "world"), 0);
	check(ft_startswith(test1, ""), 1);
	check(ft_startswith(test1, "AAAAAAAAAAAAAAAAAAAAAAAA"), 0);

	check(ft_startswith(test2, " HELLO"), 0);
	check(ft_startswith(test2, "HELLO"), 1);
	check(ft_startswith(test2, "hello"), 0);
	check(ft_startswith(test2, "Hello"), 0);
	check(ft_startswith(test2, ""), 1);
	check(ft_startswith(test2, "AAAAAAAAAAAAAAAAAAAAAAAA"), 0);

	check(ft_startswith(test3, ""), 1);
	check(ft_startswith(test3, "\0"), 1);
	check(ft_startswith(test3, "\n"), 0);
	check(ft_startswith(test3, " "), 0);
	check(ft_startswith(test3, "AAA"), 0);
	check(ft_startswith(test3, "    "), 0);

	check(ft_startswith(test4, ""), 1);
	check(ft_startswith(test4, "1234567890"), 1);
	check(ft_startswith(test4, "123456789"), 1);
	check(ft_startswith(test4, "67890"), 0);

	check(ft_startswith(test5, "a"), 0);
	check(ft_startswith(test5, "A"), 0);
	check(ft_startswith(test5, "-"), 1);
	check(ft_startswith(test5, "--"), 1);
	check(ft_startswith(test5, "---"), 1);
	check(ft_startswith(test5, "---A"), 1);
	check(ft_startswith(test5, "---Ab"), 1);
	check(ft_startswith(test5, "---ab"), 0);

	check(ft_startswith(test6, "\t"), 1);
	check(ft_startswith(test6, "\t\t"), 1);
	check(ft_startswith(test6, "\t\t\t"), 1);
	check(ft_startswith(test6, "\t\t\ta"), 0);
	check(ft_startswith(test6, "\t\t\taa"), 0);
	check(ft_startswith(test6, "\t\t\t\taa"), 1);

	check(ft_startswith(test7, "\n"), 0);
	check(ft_startswith(test7, "\t"), 1);
	check(ft_startswith(test7, "\t\n\n\t"), 1);
	check(ft_startswith(test7, "\t\n"), 1);
	check(ft_startswith(test7, "\t\n\n\n"), 0);

	check(ft_startswith(test8, "9"), 0);
	check(ft_startswith(test8, "9 "), 0);
	check(ft_startswith(test8, " 9"), 0);
	check(ft_startswith(test8, "    "), 1);

	check(ft_startswith(test9, "9"), 1);
	check(ft_startswith(test9, "9 "), 1);
	check(ft_startswith(test9, "     "), 0);
	return (0);
}
