/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_first.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:52:06 by jallerha          #+#    #+#             */
/*   Updated: 2022/03/01 11:54:53 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"

t_chain_lst			*ft_chain_first(t_chain_lst *lst)
{
	t_chain_lst		*first;
	first = lst;
	while (first->prev)
		first = first->prev;
	return (first);
}
