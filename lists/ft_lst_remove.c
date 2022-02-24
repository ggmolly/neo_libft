/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_remove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:15:20 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/24 14:47:24 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"
#include "../includes/memory.h"
void	ft_chain_remove(t_chain_lst **lst, void *content)
{
	t_chain_lst	*tmp;
	t_chain_lst	*prev;

	tmp = *lst;
	prev = NULL;
	while (tmp)
	{
		if (tmp->content == content)
		{
			if (prev)
				prev->next = tmp->next;
			else
				*lst = tmp->next;
			ft_free(&tmp);
			return ;
		}
		prev = tmp;
		tmp = tmp->next;
	}
}