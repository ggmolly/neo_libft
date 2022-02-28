/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_lines.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 21:58:25 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/28 22:03:20 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/string.h"
#include "../includes/memory.h"

t_chain_lst	*ft_split_lines(char *str)
{
	t_chain_lst	*output;

	if (ft_strrstr("\r\n", str) != NULL)
		ft_split(output, "\r\n");
	else
		ft_split(output, "\n");
	return (output);
}