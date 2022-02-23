/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:52:36 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/23 19:26:48 by jallerha         ###   ########.fr       */
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
	ft_chain_append(&lst, "World");
	ft_chain_prepend(&lst, "Bonjour!");
	// Print the list
	t_chain_lst *tmp = lst;
	int i = 0;
	while (tmp)
	{
		printf("%s", (char *)tmp->content);
		tmp = tmp->next;
		i++;
	}
	puts("\n--- DCHAIN ----");
	// Testing dchain
	t_dchain_lst *dlst;
	dlst = ft_dchain_new("Hello");
	ft_dchain_append(&dlst, "World");
	ft_dchain_prepend(&dlst, "Bonjour!");
	printf("%p -> %p -> %p -> %p\n", dlst, dlst->next, dlst->next->next, dlst->next->next->next);
	// printf("%p -> %p -> %p\n", dlst, dlst->next, dlst->next->next);
	// Print the list
	t_dchain_lst *dtmp = dlst;
	i = 0;
	while (dtmp)
	{
		printf("%s", (char *)dtmp->content);
		dtmp = dtmp->next;
		i++;
	}
	puts("");
	// Print list backwards
	dtmp = ft_dchain_last(dlst);
	while (dtmp)
	{
		printf("%s", (char *)dtmp->content);
		dtmp = dtmp->prev;
	}
	puts("\n--- DCCHAIN ----");
	// Testing dcchain
	t_dcchain_lst *dclst;
	dclst = ft_dcchain_new("Hello");
	ft_dcchain_append(&dclst, "World");
	// ft_dcchain_prepend(&dclst, "Bonjour!");
	// Print first and last
	printf("First : %s\n", (char *)dclst->first->content);
	printf("Last : %s\n", (char *)dclst->last->content);
	// Print the list
	t_dcchain_lst *dctmp = dclst;
	i = 0;
	while (dctmp != dctmp->first && i == 0)
	{
		printf("%s", (char *)dctmp->content);
		dctmp = dctmp->next;
		i++;
	}
	// Print list backwards
	// dctmp = ft_dcchain_last(dclst);
	// while (dctmp)
	// {
	// 	printf("%s", (char *)dctmp->content);
	// 	dctmp = dctmp->prev;
	// }
	puts("");
	ft_full_free();
}