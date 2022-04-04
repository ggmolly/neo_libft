/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 22:33:25 by jallerha          #+#    #+#             */
/*   Updated: 2022/04/04 14:57:35 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/chartype.h"

long	ft_atol(const char *s)
{
	int				signe;
	long			n;
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
