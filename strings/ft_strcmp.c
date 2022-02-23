/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:56:49 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/23 12:07:12 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/string.h"
#include "../includes/chartype.h"

int	ft_strcmp(t_string s1, t_string s2)
{
	int	i;

	i = 0;
	while (s1.str[i] && s2.str[i] && s1.str[i] == s2.str[i])
		i++;
	return (s1.str[i] - s2.str[i]);
}

int	ft_strncmp(t_string s1, t_string s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1.str[i] && s2.str[i] && s1.str[i] == s2.str[i] && i < n)
		i++;
	return (s1.str[i] - s2.str[i]);
}

int	ft_strcmpi(t_string s1, t_string s2)
{
	int		i;
	char	c1;
	char	c2;

	i = 0;
	while (s1.str[i] && s2.str[i])
	{
		c1 = s1.str[i];
		c2 = s2.str[i];
		if (ft_isalpha(c1) && ft_isalpha(c2)
			&& ft_toupper(c1) != ft_toupper(c2))
			c1 = ft_toupper(c1);
		if (c1 != c2)
			return (c1 - c2);
		i++;
	}
	return (0);
}
