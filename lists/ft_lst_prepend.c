/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_prepend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:49:46 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/23 19:10:41 by jallerha         ###   ########.fr       */
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

void	ft_dchain_prepend(t_dchain_lst **lst, void *content) // FIXME : Infinite loop
{
	t_dchain_lst *new;

	new = ft_dchain_new(content);
	new->prev = NULL;
	new->next = (*lst);
	new->next->prev = new;
	*lst = new;
}

void	ft_dcchain_prepend(t_dcchain_lst **lst, void *content) // TODO
{

}
