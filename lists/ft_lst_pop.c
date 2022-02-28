/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:11:42 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/28 21:49:58 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"
#include "../includes/memory.h"

void	*ft_chain_pop(t_chain_lst **lst, int index)
{
	t_chain_lst	*current;
	t_chain_lst	*next;
	t_chain_lst	*prev;
	void		*ret;
	
	if ((*lst)->content == NULL && (*lst)->next == NULL && (*lst)->prev == NULL)
		return (NULL);
	current = *lst;
	prev = NULL;
	while (current)
	{
		next = current->next;
		if (index == 0)
		{
			ret = current->content;
			if (prev)
				prev->next = next;
			else
				*lst = next;
			ft_free(current);
			return (ret);
		}
		prev = current;
		current = next;
		index--;
	}
	return (NULL);
}