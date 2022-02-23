/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:45:34 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/23 11:47:44 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/string.h"

char *ft_strstr(t_string *needle, t_string haystack)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < haystack.len)
	{
		if (needle->str[j] == haystack.str[i])
		{
			j++;
			i++;
		}
		else
		{
			i = i - j;
			j = 0;
		}
		if (j == needle->len)
			return (haystack.str + i - j);
	}
	return (NULL);
}

char *ft_strrstr(t_string *needle, t_string *haystack)
{
	int i;
	int j;

	i = haystack->len;
	j = needle->len;
	while (i >= 0)
	{
		if (needle->str[j] == haystack->str[i])
		{
			j--;
			i--;
		}
		else
		{
			i = i + needle->len - j - 1;
			j = needle->len - 1;
		}
		if (j == -1)
			return (haystack->str + i + 1);
	}
	return (NULL);
}