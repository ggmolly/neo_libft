//../lists/ft_chain_copy.c

#include "includes/lists.h"
#include "includes/memory.h"
#include <stdio.h>
#include <string.h>

void check(t_chain_lst *head, t_chain_lst *copy, char *expected)
{
	t_chain_lst *first_org = ft_chain_first(head);
	t_chain_lst *last_org = ft_chain_last(head);
	t_chain_lst *first_copy = ft_chain_first(copy);
	t_chain_lst *last_copy = ft_chain_last(copy);

	// Check that addresses are different
	if (first_org == first_copy || last_org == last_copy)
	{
		printf("F");
		return ;
	}
	
	// Check that both list are the same length
	if (ft_chain_count(head) != ft_chain_count(copy))
	{
		printf("F");
		return ;
	}

	// Check that they both contains expected
	while (first_org && first_copy)
	{
		if (strcmp(first_org->content, first_copy->content) != 0)
		{
			printf("F");
			return ;
		}
		first_org = first_org->next;
		first_copy = first_copy->next;
	}
	printf("P");
}

t_chain_lst	*create_list(int size, char *dummy)
{
	t_chain_lst *output;
	output = ft_chain_init();
	for (int i = 0; i < size; i++)
	{
		ft_chain_prepend(&output, dummy);
	}
	return (output);
}

int main(void)
{
	char *dummy = "dummy string for testing purposes it is pretty long but it is not important";
	
	t_chain_lst *test1 = create_list(10, dummy);
	t_chain_lst *test2 = create_list(19823, dummy);
	t_chain_lst *test3 = create_list(7, dummy);
	t_chain_lst *test4 = create_list(100, dummy);
	t_chain_lst *test5 = create_list(8000, dummy);
	t_chain_lst *test6 = create_list(977, dummy);
	t_chain_lst *test7 = create_list(2, dummy);

	t_chain_lst *copy1 = ft_chain_copy(test1);
	t_chain_lst *copy2 = ft_chain_copy(test2);
	t_chain_lst *copy3 = ft_chain_copy(test3);
	t_chain_lst *copy4 = ft_chain_copy(test4);
	t_chain_lst *copy5 = ft_chain_copy(test5);
	t_chain_lst *copy6 = ft_chain_copy(test6);
	t_chain_lst *copy7 = ft_chain_copy(test7);

	check(test1, copy1, dummy);
	check(test2, copy2, dummy);
	check(test3, copy3, dummy);
	check(test4, copy4, dummy);
	check(test5, copy5, dummy);
	check(test6, copy6, dummy);
	check(test7, copy7, dummy);

	ft_full_free();
	return (0);
}