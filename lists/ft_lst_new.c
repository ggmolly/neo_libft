/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:26:44 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/23 18:28:24 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/memory.h"
#include "../includes/lists.h"

t_chain_lst		*ft_chain_new(void *content)
{
	t_chain_lst	*new;
	
	if (!ft_malloc(&new, sizeof(t_chain_lst), 1))
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

t_dchain_lst	*ft_dchain_new(void *content)
{
	t_dchain_lst *new;
	
	if (!ft_malloc(&new, sizeof(t_dchain_lst), 1))
		return (NULL);
	new->content = content;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

t_dcchain_lst	*ft_dcchain_new(void *content)
{
	t_dcchain_lst *new;

	if (!ft_malloc(&new, sizeof(t_dcchain_lst), 1))
		return (NULL);
	new->content = content;
	new->next = new;
	new->prev = new;
	new->first = new;
	new->last = new;
	return (new);
}
