//../lists/ft_chain_clear.c

#include "includes/lists.h"
#include "includes/memory.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	t_chain_lst *test1;
	t_chain_lst *test2;
	t_chain_lst *test3;
	t_chain_lst *test4;
	t_chain_lst *test5;
	t_chain_lst *test6;

	test1 = ft_chain_init();
	test2 = ft_chain_init();
	test3 = ft_chain_init();
	test4 = ft_chain_init();
	test5 = ft_chain_init();
	test6 = ft_chain_init();

	for (size_t i = 0; i < 500; i++)
	{
		ft_chain_append(&test1, NULL);
		ft_chain_append(&test2, NULL);
		ft_chain_append(&test3, NULL);
		ft_chain_append(&test4, NULL);
		ft_chain_append(&test5, NULL);
		ft_chain_append(&test6, NULL);
	}
	ft_chain_clear(&test1);
	ft_chain_clear(&test2);
	ft_chain_clear(&test3);
	ft_chain_clear(&test4);
	ft_chain_clear(&test5);
	ft_chain_clear(&test6);
	printf("PPPPPP");
	ft_full_free();
	return (0);
}