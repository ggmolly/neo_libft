/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 19:32:03 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/27 20:37:46 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/string.h"
#include "../includes/memory.h"
#include "../includes/printf.h"

char	**malloc_table(int size)
{
	char	**tab;

	if (!ft_malloc(&tab, sizeof(char *), size + 1))
		return (NULL);
	tab[size] = NULL;
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

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
	int		k;
	int		len;

	i = 0;
	j = 0;
	k = 0;
	len = ft_strlen(str);
	tab = malloc_table(len);
	if (!tab)
		return (NULL);
	while (str[i])
	{
		if (ft_strcspn(str + i, charset) == 0)
		{
			i++;
			continue ;
		}
		tab[j] = ft_strcpyr(str, i, i + ft_strcspn(str + i, charset));
		i += ft_strcspn(str + i, charset);
		j++;
	}
	return (tab);
}
