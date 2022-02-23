/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:30:38 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/23 14:31:50 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"

int	ft_chain_count(t_chain_lst *lst)
{
	int				count;
	t_chain_lst		*tmp;
	
	count = 0;
	tmp = lst;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

int	ft_dchain_count(t_dchain_lst *lst)
{
	int				count;
	t_dchain_lst	*tmp;
	
	count = 0;
	tmp = lst;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

int	ft_dcchain_count(t_dcchain_lst *lst)
{
	int				count;
	t_dcchain_lst	*tmp;
	
	count = 0;
	tmp = lst;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
