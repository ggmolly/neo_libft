/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:53:30 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/26 12:23:22 by jallerha         ###   ########.fr       */
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