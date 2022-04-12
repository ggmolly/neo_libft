//../lists/ft_lst_pop.c

#include "includes/memory.h"
#include "includes/lists.h"
#include <stdio.h>
#include <stdlib.h>

void check(t_chain_lst *head)
{
	t_chain_lst *t = ft_chain_get(head, 3);
	t_chain_lst *t2 = ft_chain_get(head, 0);
	if (*(int *)t->content == 5 && *(int *)t2->content == 1)
		printf("P");
	else
		printf("F");
}

t_chain_lst	*create_list(int size)
{
	t_chain_lst *output;
	output = ft_chain_init();
	for (int i = 0; i < size; i++)
	{
		int *index;
		ft_malloc(&index, sizeof(int), 1);
		*index = i;
		ft_chain_append(&output, index);
	}
	return (output);
}

int main(void)
{
	t_chain_lst *test1 = create_list(10);
	t_chain_lst *test2 = create_list(100);
	t_chain_lst *test3 = create_list(1500);
	t_chain_lst *test4 = create_list(217);
	t_chain_lst *test5 = create_list(42);
	t_chain_lst *test6 = create_list(6969);
	t_chain_lst *test7 = create_list(1337);
	t_chain_lst *test8 = create_list(887);
	t_chain_lst *test9 = create_list(9);

	ft_chain_pop(&test1, 3);
	ft_chain_pop(&test1, 0);
	ft_chain_pop(&test2, 3);
	ft_chain_pop(&test2, 0);
	ft_chain_pop(&test3, 3);
	ft_chain_pop(&test3, 0);
	ft_chain_pop(&test4, 3);
	ft_chain_pop(&test4, 0);
	ft_chain_pop(&test5, 3);
	ft_chain_pop(&test5, 0);
	ft_chain_pop(&test6, 3);
	ft_chain_pop(&test6, 0);
	ft_chain_pop(&test7, 3);
	ft_chain_pop(&test7, 0);
	ft_chain_pop(&test8, 3);
	ft_chain_pop(&test8, 0);
	ft_chain_pop(&test9, 3);
	ft_chain_pop(&test9, 0);

	check(test1);
	check(test2);
	check(test3);
	check(test4);
	check(test5);
	check(test6);
	check(test7);
	check(test8);
	check(test9);

	ft_full_free();
	return (0);
}