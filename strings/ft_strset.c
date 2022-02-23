/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:23:15 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/23 12:05:02 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/string.h"
#include <stdio.h>

t_string	*ft_strset(t_string *target, char c)
{
	int	i;

	i = 0;
	if (target->str)
	{
		while (target->str[i])
		{
			target->str[i] = c;
			i++;
		}
	}
	return (target);
}

t_string	*ft_strnset(t_string *target, char c, size_t n)
{
	size_t	i;

	i = 0;
	if (target->str)
	{
		while (i < n && target->str[i])
		{
			target->str[i] = c;
			i++;
		}
	}
	return (target);
}
