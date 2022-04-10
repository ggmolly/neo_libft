//../strings/ft_strcmp.c
#include "includes/string.h"
#include <string.h>

void check(int y, int o)
{
	// check if both y and o are non-zero OR both y and o are zero
	if ((y && !o) || (!y && o))
		printf("F");
	else
		printf("P");
}

int main(void)
{
	check(ft_strcmp("", ""), strcmp("", ""));

	check(ft_strcmp("abcdef", "abcde"), strcmp("abcdef", "abcde"));
	check(ft_strcmp("abcdef", "xyzabc"), strcmp("abcdef", "xyzabc"));
	check(ft_strcmp("abcdef", "abcdefg"), strcmp("abcdef", "abcdefg"));
	check(ft_strcmp("abcdef", "abcdef"), strcmp("abcdef", "abcdef"));

	check(ft_strcmp("0", ""), strcmp("0", ""));
	check(ft_strcmp("0a", "0"), strcmp("0a", "0"));
	check(ft_strcmp("0a", "0a"), strcmp("0a", "0a"));
	check(ft_strcmp("", "0a"), strcmp("", "0a"));
	check(ft_strcmp("0", "0"), strcmp("0", "0"));

	check(ft_strcmp("!@#$%^&*()_+", "!@#$%^&*()_+"), strcmp("!@#$%^&*()_+", "!@#$%^&*()_+"));
	check(ft_strcmp("!@#$%^&*()_+", "!@#$%^&*()+"), strcmp("!@#$%^&*()_+", "!@#$%^&*()+"));
	check(ft_strcmp("!@#$%^&*()_+", "!@#$%^&*()_+"), strcmp("!@#$%^&*()_+", "!@#$%^&*()_+"));
	check(ft_strcmp("!@#$%^&*()_++", "!@#$%^&*()_+"), strcmp("!@#$%^&*()_++", "!@#$%^&*()_+"));
	check(ft_strcmp("!@#$%^&*()_++", ""), strcmp("!@#$%^&*()_++", ""));
	return (0);
}