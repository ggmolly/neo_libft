/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:36:19 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/24 16:12:22 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/string.h"
#include "../includes/memory.h"

t_string	ft_init_string(char *str)
{
	t_string	string;

	string.str = str;
	string.len = ft_strlen(str);
	return (string);
}

t_string	ft_dupe_string(t_string s)
{
	t_string	new;

	ft_malloc(&new.str, sizeof(char), s.len + 1);
	new.len = s.len;
	ft_strcpy(&new, &s);
	return (new);
}

void	ft_free_string(t_string *s)
{
	ft_free(s->str);
}
