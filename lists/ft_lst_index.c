/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:10:02 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/26 12:25:44 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"

int	ft_chain_index(t_chain_lst *lst, void *content)
{
	int		i;

	i = 0;
	while (lst)
	{
		if (lst->content == content)
			return (i);
		lst = lst->next;
		i++;
	}
	return (-1);
}
