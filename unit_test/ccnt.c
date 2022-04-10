//../strings/ft_ccnt.c

#include <stdio.h>
#include "includes/string.h"

void check(int got, int expected)
{
	if (got == expected)
		printf("P");
	else
		printf("F");
}

int main(void)
{
	char *test1 = "abcdefABCDEF";
	char *test2 = "abcdefabcdef";
	char *test3 = "";
	char *test4 = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
	char *test5 = "Hello World";
	char *test6 = "\n\n\n\n\n\t\t\t\t\t\r\r\r\r\r";
	char *test7 = "------_+_+=-=_++__";

	check(ft_ccnt(test1, 'a'), 1);
	check(ft_ccnt(test1, 'A'), 1);
	check(ft_ccnt(test1, '0'), 0);
	check(ft_ccnt(test2, 'a'), 2);
	check(ft_ccnt(test2, 'A'), 0);
	check(ft_ccnt(test2, '0'), 0);
	check(ft_ccnt(test3, '0'), 0);
	check(ft_ccnt(test3, 'A'), 0);
	check(ft_ccnt(test3, 'a'), 0);
	check(ft_ccnt(test3, '\0'), 0);
	check(ft_ccnt(test4, 'A'), 812);
	check(ft_ccnt(test4, 'a'), 0);
	check(ft_ccnt(test5, 'l'), 3);
	check(ft_ccnt(test5, 'p'), 0);
	check(ft_ccnt(test5, 'o'), 2);
	check(ft_ccnt(test5, 'H'), 1);
	check(ft_ccnt(test6, '\n'), 5);
	check(ft_ccnt(test6, '\t'), 5);
	check(ft_ccnt(test6, '\r'), 5);
	check(ft_ccnt(test6, 'a'), 0);
	check(ft_ccnt(test6, '0'), 0);
	check(ft_ccnt(test6, 'A'), 0);
	check(ft_ccnt(test7, '-'), 7);
	check(ft_ccnt(test7, '+'), 4);
	check(ft_ccnt(test7, '_'), 5);
	check(ft_ccnt(test7, 'A'), 0);
	check(ft_ccnt(test7, 'a'), 0);
	return (0);
}