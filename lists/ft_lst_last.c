/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:53:30 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/23 14:27:02 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"

t_chain_lst	*ft_chain_last(t_chain_lst *lst)
{
	t_chain_lst	*tmp;

	tmp = lst;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
	}
	return (tmp);
}

t_dchain_lst	*ft_dchain_last(t_dchain_lst *lst)
{
	t_dchain_lst	*tmp;

	tmp = lst;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
	}
	return (tmp);
}

t_dcchain_lst	*ft_dcchain_last(t_dcchain_lst *lst)
{
	return (lst->last);
}
