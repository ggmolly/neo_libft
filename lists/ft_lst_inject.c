/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_inject.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:18:51 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/24 14:20:43 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"

void	ft_chain_inject(t_chain_lst **lst, t_chain_lst *prev, t_chain_lst *current,
		void *content)
{
	if (prev)
	{
		prev->next = ft_chain_new(content);
		prev->next->next = current;
	}
	else
	{
		*lst = ft_chain_new(content);
		(*lst)->next = current;
	}
}