/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 22:33:25 by jallerha          #+#    #+#             */
/*   Updated: 2022/03/08 22:33:32 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/chartype.h"

long	ft_atol(const char *s)
{
	int		signe;
	int		i;
	long	n;

	signe = 1;
	i = 0;
	n = 0;
	while (ft_isblank(s[i]))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			signe = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (n * signe > 2147483647)
			return (-1);
		else if (n * signe < -2147483648)
			return (0);
		n = n * 10 + s[i] - '0';
		i++;
	}
	return (n * signe);
}
