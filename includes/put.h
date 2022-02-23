/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:32:39 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/22 19:38:35 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUT_H
# define PUT_H
# include "../includes/string.h"
# include <unistd.h>
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(t_string s, int fd);
int		ft_putstr_fd(t_string string, int fd);
void	ft_putchar_fd(char c, int fd);
#endif