/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ccnt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:44:46 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/23 17:51:23 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/string.h"

// Returns the number of characters c in the string s
int ft_ccnt(t_string s, char c)
{
	int i;
	int cnt;

	i = 0;
	cnt = 0;
	while (s.str[i])
	{
		if (s.str[i] == c)
			cnt++;
		i++;
	}
	return (cnt);
}