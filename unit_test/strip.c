//../strings/ft_strip.c

#include "includes/string.h"
#include <stdio.h>
#include <string.h>

void check(int got)
{
	if (got == 0)
		printf("P");
	else
		printf("F");
}

int main(void)
{
	char test1[] = "\n\t\n\t\r\r    HELLO WORLD   \n\t\n\t\r\r";
	char test2[] = "\n\t\n\t\r\r   HELLO WORLD";
	char test3[] = "HELLO WORLD   \n\t\n\t\r\r";

	char test4[] = "\n\t\n\t\r\r   HELLO WORLD   \n\t\n\t\r\r";
	char test5[] = "\n\t\n\t\r\r   HELLO WORLD";
	char test6[] = "HELLO WORLD   \n\t\n\t\r\r";

	char test7[] = "\n\t\n\t\r\r    HELLO WORLD    \n\t\n\t\r\r";
	char test8[] = "\n\t\n\t\r\r   HELLO WORLD";
	char test9[] = "HELLO WORLD   \n\t\n\t\r\r";

	ft_lstrip(test1);
	ft_lstrip(test2);
	ft_lstrip(test3);
	
	ft_rstrip(test4);
	ft_rstrip(test5);
	ft_rstrip(test6);

	ft_strip(test7);
	ft_strip(test8);
	ft_strip(test9);

	check(strcmp(test1, "HELLO WORLD   \n\t\n\t\r\r"));
	check(strcmp(test2, "HELLO WORLD"));
	check(strcmp(test3, "HELLO WORLD   \n\t\n\t\r\r"));

	check(strcmp(test4, "\n\t\n\t\r\r   HELLO WORLD"));
	check(strcmp(test5, "\n\t\n\t\r\r   HELLO WORLD"));
	check(strcmp(test6, "HELLO WORLD"));

	check(strcmp(test7, "HELLO WORLD"));
	check(strcmp(test8, "HELLO WORLD"));
	check(strcmp(test9, "HELLO WORLD"));
	return (0);
}