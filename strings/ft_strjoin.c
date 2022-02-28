/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 22:14:41 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/28 23:29:06 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lists.h"
#include "../includes/string.h"
#include "../includes/memory.h"

void	ft_concat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!dest || !src)
		return ;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
}

int	ft_get_size(t_chain_lst *lst)
{
	int			size;
	t_chain_lst	*tmp;

	size = 0;
	tmp = lst;
	while (tmp)
	{
		if (tmp->content)
			size += ft_strlen(tmp->content);
		tmp = tmp->next;
	}
	return (size);
}

char		*ft_strjoin(char *separator, t_chain_lst *iterable)
{
	char		*output;
	int			size;
	int			i;
	t_chain_lst	*tmp;
	
	size = ft_get_size(iterable) + (ft_strlen(separator) * (ft_chain_count(iterable)));
	if (!ft_malloc(&output, sizeof(char), size))
		return (NULL);
	i = 0;
	tmp = iterable;
	while (iterable)
	{
		if (iterable->content)
		{
			ft_concat(output, (char *) iterable->content);
			if (iterable->next)
				ft_concat(output, separator);
		}
		iterable = iterable->next;
	}
	output[size - 1] = '\0';
	return (output);
}