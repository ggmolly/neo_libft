/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:47:50 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/22 19:59:12 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/string.h"

t_string	ft_strdup(t_string s)
{
	t_string	new;
	
	new = ft_dupe_string(s.str);
	return (new);
}