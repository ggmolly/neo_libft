//../lists/ft_chain_last.c

#include "includes/memory.h"
#include "includes/lists.h"
#include <stdio.h>
#include <stdlib.h>

void check(t_chain_lst *check)
{
	t_chain_lst *head = ft_chain_last(check);
	int val = *(int *)head->content;

	if (val == 2)
		printf("P");
	else
		printf("F");
}

t_chain_lst	*create_list(int size, int *dummy, int *dummy2)
{
	t_chain_lst *output;
	output = ft_chain_init();
	for (int i = 0; i < size; i++)
	{
		if (i == size - 1)
			ft_chain_append(&output, dummy2);
		else
			ft_chain_prepend(&output, dummy);
	}
	return (output);
}

int main(void)
{
	int *dummy;
	int *dummy2;

	dummy = (int *)malloc(sizeof(int));
	dummy2 = (int *)malloc(sizeof(int));
	*dummy = 1;
	*dummy2 = 2;

	t_chain_lst *test1 = create_list(10, dummy, dummy2);
	t_chain_lst *test2 = create_list(1, dummy, dummy2);
	t_chain_lst *test3 = create_list(7, dummy, dummy2);
	t_chain_lst *test4 = create_list(100, dummy, dummy2);
	t_chain_lst *test5 = create_list(8000, dummy, dummy2);
	t_chain_lst *test6 = create_list(977, dummy, dummy2);
	t_chain_lst *test7 = create_list(2, dummy, dummy2);

	check(test1);
	check(test2);
	check(test3);
	check(test4);
	check(test5);
	check(test6);
	check(test7);

	free(dummy);
	free(dummy2);
	ft_full_free();
	return (0);
}