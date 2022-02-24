/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:44:38 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/24 14:46:58 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"

void	ft_chain_append(t_chain_lst **lst, void *content)
{
	t_chain_lst	*new;

	new = ft_chain_new(content);
	if (!new)
		return ;
	new->next = NULL;
	if (*lst)
	{
		ft_chain_last(*lst)->next = new;
	}
	else
	{
		*lst = new;
	}
}

void	ft_dchain_append(t_dchain_lst **lst, void *content)
{
	t_dchain_lst	*new;
	t_dchain_lst	*last;
	
	new = ft_dchain_new(content);
	if (!new)
		return ;
	new->next = NULL;
	if (*lst)
	{
		last = ft_dchain_last(*lst);
		last->next = new;
		new->prev = last;
	}
	else
	{
		*lst = new;
	}
}