/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pextend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:09:18 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/24 14:47:34 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"

void	ft_chain_pextend(t_chain_lst **lst, void **input, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		ft_chain_prepend(lst, input[i]);
		i++;
	}
}