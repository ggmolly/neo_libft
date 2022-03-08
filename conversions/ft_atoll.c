/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 22:33:44 by jallerha          #+#    #+#             */
/*   Updated: 2022/03/08 22:34:23 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/chartype.h"

long long	ft_atoll(const char *s)
{
	int			signe;
	int			i;
	long long	n;

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
