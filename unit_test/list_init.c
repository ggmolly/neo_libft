//../lists/ft_lst_init.c

#include "includes/lists.h"
#include "includes/memory.h"
#include <stdio.h>

void check(void *expected, int got)
{
	int exp = *(int*)expected;
	if (exp == got)
		printf("P");
	else
		printf("F");
}


int main(void)
{
	t_chain_lst *tmp;

	for (size_t i = 0; i < 20; i++)
	{
		tmp = ft_chain_init();
		if (&tmp == 0x0)
			printf("F");
		else if (tmp->next == 0x0 && tmp->prev == 0x0 && tmp->content == 0x0)
		{
			printf("P");
			ft_free(&tmp);
		}
		else
			printf("F");
	}
	return (0);
}