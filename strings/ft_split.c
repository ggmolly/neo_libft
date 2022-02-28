/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 19:32:03 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/28 15:03:43 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/string.h"
#include "../includes/memory.h"
#include "../includes/printf.h"
#include <stdio.h>

char	**malloc_table(int size)
{
	char	**tab;

	if (!ft_malloc(&tab, sizeof(char *), size + 1))
		return (NULL);
	tab[size + 1] = NULL;
	return (tab);
}

char	*ft_strcpyr(char *src, int start, int end)
{
	char	*dest;
	int		i;

	i = 0;
	if (!ft_malloc(&dest, sizeof(char), end - start + 1))
		return (NULL);
	while (start < end)
	{
		dest[i] = src[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *word)
{
	char 	**output;
	int		i;
	int		start;
	int		end;
	
	output = malloc_table(ft_count_words(str, word) + 1);
	if (!output)
		return (NULL);
	start = 0;
	i = 0;
	end = ft_index(str, word);
	while (end != -1)
	{
		ft_printf("%s\n", str);
		output[i] = ft_strcpyr(str, start, end);
		str += end + 1;
		end = ft_index(str, word);
		i++;
	}
	output[i] = ft_strdup(str);
	return (output);
}
