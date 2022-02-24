/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_insert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:17:01 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/24 14:22:17 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"

void	ft_chain_insert(t_chain_lst **lst, void *content, int index)
{
	t_chain_lst	*tmp;
	t_chain_lst	*prev;
	int			i;

	tmp = *lst;
	prev = NULL;
	i = 0;
	while (tmp)
	{
		if (i++ == index)
		{
			ft_chain_inject(lst, prev, tmp, content);
			return ;
		}
		prev = tmp;
		tmp = tmp->next;
	}
}
