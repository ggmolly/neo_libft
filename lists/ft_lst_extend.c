/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_extend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:44:50 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/24 17:08:50 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"
#include <stdio.h>

void	ft_chain_extend(t_chain_lst **lst, void **input, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		ft_chain_append(lst, input[i]);
		i++;
	}
}
