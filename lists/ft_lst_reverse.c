/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:22:48 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/26 14:19:20 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"

void	ft_chain_reverse(t_chain_lst **lst)
{
	t_chain_lst	*current;
	t_chain_lst	*next;
	t_chain_lst	*prev;
	
	if (!lst || !*lst)
		return ;
	current = *lst;
	prev = NULL;
	while (current)
	{
		next = current->next;
		current->next = prev;
		current->prev = next;
		prev = current;
		current = next;
	}
	*lst = prev;
}