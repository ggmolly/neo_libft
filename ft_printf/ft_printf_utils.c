/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:54:17 by yfoucade          #+#    #+#             */
/*   Updated: 2022/02/26 15:07:28 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

unsigned int	ft_putstr(char *s)
{
	unsigned int	res;

	if (s == NULL)
		return (write(1, "(null)", 6));
	res = ft_strlen(s);
	write(1, s, res);
	return (res);
}
