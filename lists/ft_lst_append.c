/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:44:38 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/23 14:33:22 by jallerha         ###   ########.fr       */
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