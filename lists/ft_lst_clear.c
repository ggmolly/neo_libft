/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:37:43 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/23 14:53:53 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"
#include "../includes/memory.h"
#include <stdio.h>
void	ft_chain_clear(t_chain_lst **lst)
{
	t_chain_lst	*tmp;

	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		ft_free(&tmp);
	}
}

void	ft_dchain_clear(t_dchain_lst **lst)
{
	t_dchain_lst	*tmp;

	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		ft_free(&tmp);
	}
}

void	ft_dcchain_clear(t_dcchain_lst **lst)
{
	t_dcchain_lst	*tmp;

	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		ft_free(&tmp);
	}
}
