//../lists/ft_chain_insert.c

#include "includes/memory.h"
#include "includes/lists.h"
#include <stdio.h>
#include <stdlib.h>

void check(t_chain_lst *head, int *expected)
{
	t_chain_lst *tmp = ft_chain_get(head, 5);
	if (tmp)
	{
		if (*(int *)tmp->content == *expected)
			printf("P");
		else
			printf("F");
	}
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
	int *dummy;

	ft_malloc(&dummy, sizeof(int), 1);
	*dummy = -999;

	t_chain_lst *test1 = create_list(10);
	t_chain_lst *test2 = create_list(15);
	t_chain_lst *test3 = create_list(20);
	t_chain_lst *test4 = create_list(70);
	t_chain_lst *test5 = create_list(717);
	t_chain_lst *test6 = create_list(5851);
	t_chain_lst *test7 = create_list(41);
	t_chain_lst *test8 = create_list(214);
	t_chain_lst *test9 = create_list(42);

	ft_chain_insert(&test1, dummy, 5);
	ft_chain_insert(&test2, dummy, 5);
	ft_chain_insert(&test3, dummy, 5);
	ft_chain_insert(&test4, dummy, 5);
	ft_chain_insert(&test5, dummy, 5);
	ft_chain_insert(&test6, dummy, 5);
	ft_chain_insert(&test7, dummy, 5);
	ft_chain_insert(&test8, dummy, 5);
	ft_chain_insert(&test9, dummy, 5);

	check(test1, dummy);
	check(test2, dummy);
	check(test3, dummy);
	check(test4, dummy);
	check(test5, dummy);
	check(test6, dummy);
	check(test7, dummy);
	check(test8, dummy);
	check(test9, dummy);
	ft_full_free();
	return (0);
}