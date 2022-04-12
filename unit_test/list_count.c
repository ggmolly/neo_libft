//../lists/ft_lst_preappend.c

#include "includes/memory.h"
#include "includes/lists.h"
#include <stdio.h>
#include <stdlib.h>

void check(t_chain_lst *head, int expected)
{
	int size = ft_chain_count(head);

	if (size != expected)
		printf("F");
	else
		printf("P");
}

t_chain_lst	*create_list(int size)
{
	t_chain_lst *output;
	int *dummy;

	dummy = (int *)malloc(sizeof(int));
	*dummy = 1;
	output = ft_chain_init();
	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
			ft_chain_prepend(&output, dummy);
		else
			ft_chain_append(&output, dummy);
	}
	free(dummy);
	return (output);
}

int main(void)
{
	t_chain_lst *test1 = create_list(10);
	t_chain_lst *test2 = create_list(1);
	t_chain_lst *test3 = create_list(7);
	t_chain_lst *test4 = create_list(100);
	t_chain_lst *test5 = create_list(8000);
	t_chain_lst *test6 = create_list(977);
	t_chain_lst *test7 = create_list(2);

	check(test1, 10);
	check(test2, 1);
	check(test3, 7);
	check(test4, 100);
	check(test5, 8000);
	check(test6, 977);
	check(test7, 2);

	ft_full_free();
	return (0);
}