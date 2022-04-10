//../math/ft_abs.c

#include <stdio.h>
#include "includes/math.h"

void check(int got, int expected)
{
	if (got == expected)
		printf("P");
	else
		printf("E");
}

int main(void)
{
	check(ft_abs(-42), 42);
	check(ft_abs(42), 42);
	check(ft_abs(-2147483647), 2147483647);
	check(ft_abs(2147483647), 2147483647);
	check(ft_abs(-0), 0);
	check(ft_abs(-1), 1);
	check(ft_abs(1), 1);
	return (0);
}