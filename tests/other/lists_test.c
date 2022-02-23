/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:52:36 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/23 15:07:59 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/lists.h"
#include "../../includes/memory.h"
#include <stdio.h>

int main(void)
{
	// Test a basic instance of chained list
	t_chain_lst *lst;

	lst = ft_chain_new("Hello");
	ft_chain_append(&lst, " World");
	ft_chain_prepend(&lst, "Bonjour ! ");
	
	printf("%p [%s]\n", lst, (char *) lst->content);
	printf("%p [%s]\n", lst->next, (char *) lst->next->content);
	printf("%p [%s]\n", lst->next->next, (char *) lst->next->next->content);
	printf("%p [%s]\n", lst->next->next->next, (char *) lst->next->next->next->content);
	printf("%p [%s]\n", lst->next->next->next->next, (char *) lst->next->next->next->next->content);
	// Print the list
	t_chain_lst *tmp = lst;
	int i = 0;
	while (tmp && i < 2)
	{
		printf("%s", (char *)tmp->content);
		tmp = tmp->next;
		i++;
	}
	puts("");
	ft_full_free();
}