//../lists/ft_chain_index.c

#include "includes/memory.h"
#include "includes/lists.h"
#include <stdio.h>
#include <stdlib.h>

void check(t_chain_lst *head, int size)
{
	int *first_item_index;
	int *second_item_index;

	ft_malloc(&first_item_index, sizeof(int), 1);
	ft_malloc(&second_item_index, sizeof(int), 1);

	*first_item_index = rand() % size;
	*second_item_index = rand() % size;	

	if (ft_chain_index(head, first_item_index, sizeof(int)) != *first_item_index)
	{
		printf("F");
		return ;
	}
	if (ft_chain_index(head, second_item_index, sizeof(int)) != *second_item_index)
	{
		printf("F");
		return ;
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
	t_chain_lst *test1 = create_list(10);
	t_chain_lst *test2 = create_list(15);
	t_chain_lst *test3 = create_list(20);
	t_chain_lst *test4 = create_list(70);
	t_chain_lst *test5 = create_list(717);
	t_chain_lst *test6 = create_list(5851);
	t_chain_lst *test7 = create_list(41);
	t_chain_lst *test8 = create_list(214);
	t_chain_lst *test9 = create_list(42);

	check(test1, 10);
	check(test2, 15);
	check(test3, 20);
	check(test4, 70);
	check(test5, 717);
	check(test6, 5851);
	check(test7, 41);
	check(test8, 214);
	check(test9, 42);
	ft_full_free();
	return (0);
}