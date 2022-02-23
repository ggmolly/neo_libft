/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:52:41 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/22 19:53:56 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/string.h"

char *ft_strchr(t_string s, int c)
{
	int i;

	i = 0;
	while (i < s.len)
	{
		if (s.str[i] == c)
			return (&s.str[i]);
		i++;
	}
}

char *ft_strrchr(t_string s, int c)
{
	int i;

	i = s.len;
	while (i >= 0)
	{
		if (s.str[i] == c)
			return (&s.str[i]);
		i--;
	}
}