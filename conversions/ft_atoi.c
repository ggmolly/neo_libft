/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:52:08 by jallerha          #+#    #+#             */
/*   Updated: 2022/04/04 14:50:55 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/chartype.h"

int	ft_atoi(const char *s)
{
	int				signe;
	int				n;
	register int	i;
	register char	c;

	signe = 1;
	i = -1;
	n = 0;
	c = s[++i];
	while (ft_isblank(c))
		c = s[++i];
	if (c == 45 || c == 43)
	{
		if (c == '-')
			signe = -1;
		c = s[++i];
	}
	while (ft_isdigit(c))
	{
		n = n * 10 + c - 48;
		c = s[++i];
	}
	return (n * signe);
}
