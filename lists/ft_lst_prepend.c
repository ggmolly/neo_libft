/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_prepend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:49:46 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/24 14:46:55 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"
#include "../includes/memory.h"

void	ft_chain_prepend(t_chain_lst **lst, void *content)
{
	t_chain_lst	*new;

	new = ft_chain_new(content);
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

void	ft_dchain_prepend(t_dchain_lst **lst, void *content)
{
	t_dchain_lst *new;

	new = ft_dchain_new(content);
	new->prev = NULL;
	new->next = (*lst);
	new->next->prev = new;
	*lst = new;
}