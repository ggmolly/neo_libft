/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:22:48 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/24 14:47:47 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"

void	ft_chain_reverse(t_chain_lst **lst)
{
	t_chain_lst	*tmp;
	t_chain_lst	*prev;
	t_chain_lst	*next;

	tmp = *lst;
	prev = NULL;
	while (tmp)
	{
		next = tmp->next;
		tmp->next = prev;
		prev = tmp;
		tmp = next;
	}
	*lst = prev;
}