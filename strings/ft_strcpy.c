/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:00:19 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/22 20:01:30 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/string.h"

void ft_strcpy(t_string *s, t_string *d)
{
	int i;

	i = 0;
	while (s->str[i])
	{
		d->str[i] = s->str[i];
		i++;
	}
	d->str[i] = '\0';
	d->len = i;
}