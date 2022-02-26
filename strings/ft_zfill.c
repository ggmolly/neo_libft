/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zfill.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:20:02 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/26 17:32:51 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/memory.h"
#include "../includes/string.h"

void	ft_zfill(char *s, int n)
{
	int zeroes;

	zeroes = n - ft_strlen(s);
	if (zeroes <= 0)
		return ;
	ft_memmove(s + zeroes, s, ft_strlen(s) + 1);
	ft_memset(s, '0', zeroes);
}