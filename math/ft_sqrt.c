/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:16:33 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/24 14:49:01 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int n)
{
	int	i;

	i = 0;
	while (i * i <= n)
	{
		if (i * i == n)
			return (i);
		i++;
	}
	return (0);
}

long	ft_sqrt_l(long n)
{
	int			i;

	i = 0;
	while (i * i <= n)
	{
		if (i * i == n)
			return (i);
		i++;
	}
	return (0);
}

long long	ft_sqrt_ll(long long n)
{
	int			i;

	i = 0;
	while (i * i <= n)
	{
		if (i * i == n)
			return (i);
		i++;
	}
	return (0);
}