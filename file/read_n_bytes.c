/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_n_bytes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:34:42 by jallerha          #+#    #+#             */
/*   Updated: 2022/03/20 18:10:01 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/string.h"

char	*read_n_bytes(int fd, size_t n)
{
	char buffer[n + 1];

	if (fd < 0)
		return (NULL);
	if (read(fd, buffer, n) < 0)
		return (NULL);
	buffer[n] = '\0';
	return (ft_strdup(buffer));
}