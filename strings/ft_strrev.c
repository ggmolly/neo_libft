/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:55:52 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/22 19:57:48 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/string.h"

void ft_strrev(t_string *s)
{
	int i;
	int j;
	char tmp;
	
	i = 0;
	j = s->len;
	while (i < j)
	{
		tmp = s->str[i];
		s->str[i] = s->str[j];
		s->str[j] = tmp;
		i++;
		j--;
	}
}