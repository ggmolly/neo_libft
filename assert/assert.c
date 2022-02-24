/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:23:51 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/24 15:33:21 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/put.h"
#include "../includes/constants.h"
#include "../includes/memory.h"

void assert(int condition)
{
	if (!condition)
	{
		ft_full_free();
		exit(1);
	}
}

void assert_msg(int condition, t_string msg)
{
	if (!condition)
	{
		ft_putendl_fd(msg, STDERR);
		ft_full_free();
		exit(1);
	}
}

void assert_verbose(int condition, t_string fail, t_string success)
{
	if (!condition)
	{
		ft_putendl_fd(fail, STDERR);
		ft_full_free();
		exit(1);
	}
	else
		ft_putendl_fd(success, STDERR);
}