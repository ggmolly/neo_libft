/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strip.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:37:44 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/26 18:22:28 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/string.h"
#include "../includes/chartype.h"
#include <stdio.h>

void	ft_strip(char *s)
{
	ft_lstrip(s);
	ft_rstrip(s);
}

void	ft_lstrip(char *s)
{
	int i;
	
	i = 0;
	while (s[i] && (ft_isspace(s[i])))
		i++;
	ft_memmove(s, s + i, ft_strlen(s) - i + 1);
}

void	ft_rstrip(char *s)
{
	int i;
	
	i = ft_strlen(s) - 1;
	while (s[i] && (ft_isspace(s[i])))
		i--;
	s[i + 1] = '\0';
}