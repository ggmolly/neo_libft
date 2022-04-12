//../lists/ft_lst_new.c

#include "includes/memory.h"
#include "includes/lists.h"
#include <stdio.h>
#include <stdlib.h>

void check(void *got, int expected)
{
	int val = *(int*)got;
	if (val == expected)
		printf("P");
	else
		printf("F");
}

int	*random_int(void)
{
	int *val = (int*)malloc(sizeof(int));
	*val = rand();
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
	t_chain_lst *test2 = ft_chain_new(val2);
	t_chain_lst *test3 = ft_chain_new(val3);
	t_chain_lst *test4 = ft_chain_new(val4);
	t_chain_lst *test5 = ft_chain_new(val5);
	t_chain_lst *test6 = ft_chain_new(val6);
	t_chain_lst *test7 = ft_chain_new(val7);
	t_chain_lst *test8 = ft_chain_new(val8);
	t_chain_lst *test9 = ft_chain_new(val9);

	check(test1->content, *val1);
	check(test2->content, *val2);
	check(test3->content, *val3);
	check(test4->content, *val4);
	check(test5->content, *val5);
	check(test6->content, *val6);
	check(test7->content, *val7);
	check(test8->content, *val8);
	check(test9->content, *val9);

	ft_free(&test1);
	ft_free(&test2);
	ft_free(&test3);
	ft_free(&test4);
	ft_free(&test5);
	ft_free(&test6);
	ft_free(&test7);
	ft_free(&test8);
	ft_free(&test9);
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