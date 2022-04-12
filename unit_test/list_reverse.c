//../lists/ft_chain_reverse.c

#include "includes/lists.h"
#include "includes/memory.h"
#include <stdio.h>

void check(t_chain_lst *head)
{
	t_chain_lst *first = ft_chain_first(head);
	t_chain_lst *last = ft_chain_last(head);

	int val1 = *(int *)first->content;
	int val2 = *(int *)last->content;

	if (val1 == 0 && val2 == 1)
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
		if (i == 0)
			ft_chain_append(&output, dummy); // first = 1
		else if (i == size - 1)
			ft_chain_append(&output, dummy2); // last = 0
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
	*dummy2 = 0;

	t_chain_lst *test1 = create_list(10, dummy, dummy2);
	t_chain_lst *test2 = create_list(19823, dummy, dummy2);
	t_chain_lst *test3 = create_list(7, dummy, dummy2);
	t_chain_lst *test4 = create_list(100, dummy, dummy2);
	t_chain_lst *test5 = create_list(8000, dummy, dummy2);
	t_chain_lst *test6 = create_list(977, dummy, dummy2);
	t_chain_lst *test7 = create_list(2, dummy, dummy2);

	ft_chain_reverse(&test1);
	ft_chain_reverse(&test2);
	ft_chain_reverse(&test3);
	ft_chain_reverse(&test4);
	ft_chain_reverse(&test5);
	ft_chain_reverse(&test6);
	ft_chain_reverse(&test7);

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