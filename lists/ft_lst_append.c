/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:44:38 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/26 12:55:11 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"

void	ft_chain_append(t_chain_lst **lst, void *content)
{
	t_chain_lst	*new;
	t_chain_lst *last;

	new = ft_chain_new(content);
	if (!new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		last = ft_chain_last(*lst);
		last->next = new;
		new->prev = last;
	}
}