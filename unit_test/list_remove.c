//../lists/ft_chain_remove.c

#include "includes/memory.h"
#include "includes/lists.h"
#include <stdio.h>
#include <stdlib.h>

void check(t_chain_lst *head)
{
	t_chain_lst *tmp;

	tmp = head;
	while (tmp)
	{
		if (*(int *)tmp->content == 5)
		{
			printf("F");
			return;
		}
		tmp = tmp->next;
	}
	printf("P");
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
	*dummy = 5;

	t_chain_lst *test1 = create_list(10);
	t_chain_lst *test2 = create_list(15);
	t_chain_lst *test3 = create_list(20);
	t_chain_lst *test4 = create_list(70);
	t_chain_lst *test5 = create_list(717);
	t_chain_lst *test6 = create_list(5851);
	t_chain_lst *test7 = create_list(41);
	t_chain_lst *test8 = create_list(214);
	t_chain_lst *test9 = create_list(42);

	ft_chain_remove(&test1, dummy, sizeof(int));
	ft_chain_remove(&test2, dummy, sizeof(int));
	ft_chain_remove(&test3, dummy, sizeof(int));
	ft_chain_remove(&test4, dummy, sizeof(int));
	ft_chain_remove(&test5, dummy, sizeof(int));
	ft_chain_remove(&test6, dummy, sizeof(int));
	ft_chain_remove(&test7, dummy, sizeof(int));
	ft_chain_remove(&test8, dummy, sizeof(int));
	ft_chain_remove(&test9, dummy, sizeof(int));

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