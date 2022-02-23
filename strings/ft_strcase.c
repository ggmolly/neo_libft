/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:48:47 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/22 19:52:13 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/string.h"
#include "../includes/chartype.h"

void ft_strlwr(t_string s)
{
	int i;

	i = 0;
	while (i < s.len)
	{
		if (ft_isupper(s.str[i]))
			s.str[i] += 32;
		i++;
	}
}

void ft_strupr(t_string s)
{
	int i;

	i = 0;
	while (i < s.len)
	{
		if (ft_islower(s.str[i]))
			s.str[i] -= 32;
		i++;
	}
}