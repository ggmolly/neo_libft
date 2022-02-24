/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:47:54 by yfoucade          #+#    #+#             */
/*   Updated: 2022/02/24 16:11:32 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../includes/string.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int				ft_printf(const char *format, ...);
unsigned int	ft_putchar(char c);
unsigned int	ft_putstr(char *s);

size_t			ft_putnbrbase(unsigned long long nbr, char base, char lower);
size_t			ft_putdec(long long nbr);
size_t			ft_puthex(unsigned long nbr);
size_t			ft_putcsp(char converter, va_list ap);

#endif
