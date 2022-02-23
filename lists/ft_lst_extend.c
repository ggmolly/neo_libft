/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_extend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:44:50 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/23 14:54:14 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"

void	ft_chain_extend(t_chain_lst **lst, void **input, size_t size)
{
	int			i;

	i = 0;
	while (i < size)
	{
		ft_chain_append(lst, input[i]);
		i++;
	}
}

void	ft_dchain_extend(t_dchain_lst **lst, void **input, size_t size)
{
	// int			i;

	// i = 0;
	// while (i < size)
	// {
	// 	ft_dchain_append(lst, input[i]);
	// 	i++;
	// }
}

void	ft_dcchain_extend(t_dcchain_lst **lst, void **input, size_t size)
{
	// int			i;

	// i = 0;
	// while (i < size)
	// {
	// 	ft_dcchain_append(lst, input[i]);
	// 	i++;
	// }
}
