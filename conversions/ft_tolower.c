/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:41:50 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/24 14:55:44 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/chartype.h"

char ft_tolower(char c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}