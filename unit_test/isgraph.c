//../chartype/ft_isgraph.c

#include <ctype.h>
#include <stdio.h>
#include "includes/chartype.h"

void check(char c)
{
	int o = isgraph(c);
	int y = ft_isgraph(c);
	// check if both are non-zero OR if both are zero
	if ((o && y) || (!o && !y))
		printf("P");
	else
		printf("F");
}

int main(void)
{
	check('0');
	check('1');
	check('2');
	check('3');
	check('4');
	check('5');
	check('6');
	check('7');
	check('8');
	check('9');
	check('A');
	check('B');
	check('c');
	check('d');
	check('\n');
	check('\t');
	check('-');
	check('+');
	check('\033');
	check(' ');
	check("\v");
	check("\f");
	check("\r");
	check(',');
	check('?');
	check('!');
	check('.');
	return (0);
}