//../lists/ft_lst_preappend.c

#include "includes/memory.h"
#include "includes/lists.h"
#include <stdio.h>
#include <stdlib.h>

void check(t_chain_lst *head, int size)
{
	int i;
	t_chain_lst *tmp;
	int val;

	i = 0;
	tmp = head;
	while (tmp)
	{
		val = *(int*)tmp->content;
		if (tmp->content != NULL && val == 1)
		{
			printf("P");
			i++;
		}
		else
			printf("F");
		tmp = tmp->next;
	}
	if (i != size)
		printf("?");
}

int	*random_int(void)
{
	int *val = (int*)malloc(sizeof(int));
	*val = 1;
	return (val);
}

int main(void)
{
	int *val1 = random_int();
	int *val2 = random_int();
	int *val3 = random_int();
	int *val4 = random_int();
	int *val5 = random_int();
	int *val6 = random_int();
	int *val7 = random_int();
	int *val8 = random_int();
	int *val9 = random_int();

	t_chain_lst *test1 = ft_chain_new(val1);

	ft_chain_prepend(&test1, val2);
	ft_chain_prepend(&test1, val3);
	ft_chain_prepend(&test1, val4);
	ft_chain_prepend(&test1, val5);
	ft_chain_prepend(&test1, val6);
	ft_chain_prepend(&test1, val7);
	ft_chain_prepend(&test1, val8);
	ft_chain_prepend(&test1, val9);

	check(test1, 9);
	ft_chain_clear(&test1);
	free(val1);
	free(val2);
	free(val3);
	free(val4);
	free(val5);
	free(val6);
	free(val7);
	free(val8);
	free(val9);
	return (0);
}