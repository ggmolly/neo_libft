/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_prepend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:49:46 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/23 15:22:21 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"
#include "../includes/memory.h"

void	ft_chain_prepend(t_chain_lst **lst, void *content)
{
	t_chain_lst	*new; // FIXME : Infinite loop

	if (!ft_malloc(new, sizeof(t_chain_lst), 1))
		return ;
	new->content = content;
	new->next = *lst;
	*lst = new;
}

void	ft_dchain_prepend(t_dchain_lst **lst, void *content)
{
	t_dchain_lst *new;

	if (!ft_malloc(new, sizeof(t_dchain_lst), 1))
		return ;
	new->content = content;
	new->next = *lst;
	new->prev = NULL;
	new->next->prev = new;
	*lst = new;
}

void	ft_dcchain_prepend(t_dcchain_lst **lst, void *content) // TODO
{

}
