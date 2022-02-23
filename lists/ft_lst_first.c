/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_first.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:52:06 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/23 13:56:59 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"

t_chain_lst			*ft_chain_first(t_chain_lst *lst)
{
	return (lst);
}

t_dchain_lst		*ft_dchain_first(t_dchain_lst *lst)
{
	return (lst);
}

t_dcchain_lst		*ft_dcchain_first(t_dcchain_lst *lst)
{
	return (lst->first);
}