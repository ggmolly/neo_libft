/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:10:14 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/23 12:07:43 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/string.h"

void	ft_strcat(t_string *dest, t_string *src)
{
	int	i;

	i = 0;
	if (!dest->str || !src->str)
		return ;
	while (src->str[i])
	{
		dest->str[dest->len] = src->str[i];
		dest->len++;
		i++;
	}
	dest->str[dest->len] = '\0';
}

t_string	*ft_strncat(t_string *dest, t_string *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest->str[i])
		i++;
	while (j < n && src->str[j])
	{
		dest->str[i] = src->str[j];
		dest->len++;
		i++;
		j++;
	}
	dest->str[i] = '\0';
	return (dest);
}
