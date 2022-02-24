/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:11:42 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/24 14:14:57 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"

t_chain_lst	*ft_chain_pop(t_chain_lst **lst, int index)
{
	int	i;
	t_chain_lst	*tmp;
	t_chain_lst *prev;
	t_chain_lst *removed;
	
	tmp = (*lst);
	i = 0;
	while (tmp)
	{
		if (i == index)
		{
			removed = tmp;
			if (tmp == *lst)
			{
				*lst = tmp->next;
				return (removed);
			}
			prev->next = tmp->next;
			return (removed);
		}
		prev = tmp;
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}