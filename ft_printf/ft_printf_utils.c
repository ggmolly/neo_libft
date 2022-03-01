/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:54:17 by yfoucade          #+#    #+#             */
/*   Updated: 2022/03/01 22:28:22 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

unsigned int	ft_putstr(char *s)
{
	unsigned int	res;

	if (s == NULL)
		return (write(1, "(null)", 6));
	res = ft_strlen(s);
	return (write(1, s, res));
}
