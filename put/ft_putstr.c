/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:32:22 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/24 12:36:11 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/string.h"

int	ft_putstr_fd(t_string string, int fd)
{
	write(fd, string.str, string.len);
	return (string.len);
}
