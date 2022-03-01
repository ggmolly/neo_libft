/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zfill.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:20:02 by jallerha          #+#    #+#             */
/*   Updated: 2022/03/01 13:26:16 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/memory.h"
#include "../includes/string.h"

char	*ft_zfill(char *s, int n)
{
	int		zeroes;
	char	*output;

	zeroes = n - ft_strlen(s);
	if (zeroes <= 0)
		return (NULL);
	if (!ft_malloc(&output, sizeof(char), ft_strlen(s) + zeroes + 1))
		return (NULL);
	ft_memset(output, '0', zeroes);
	ft_strncpy(output + zeroes, s, ft_strlen(s));
	return (output);
}