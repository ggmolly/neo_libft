/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chartype_tests.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr==          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:33:05 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/22 16:03:02 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/chartype.h"
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	puts("\033[33mRunning 'chartype' tests...");
	for (size_t i = 0; i < 128; i++)
	{
		if (!((ft_isascii(i) != 0 && isascii(i) != 0) || (ft_isascii(i) == 0 && isascii(i) == 0)))
		{
			printf("\033[31mft_isascii(%ld) != isascii(%ld) || %d != %d\033[0m\n", i, i, ft_isascii(i), isascii(i));
			return (1);
		}
		if (!((ft_isalpha(i) != 0 && isalpha(i) != 0) || (ft_isalpha(i) == 0 && isalpha(i) == 0)))
		{
			printf("\033[31mft_isalpha(%ld) != isalpha(%ld) || %d != %d\033[0m\n", i, i, ft_isalpha(i), isalpha(i));
			return (1);
		}
		if (!((ft_isdigit(i) != 0 && isdigit(i) != 0) || (ft_isdigit(i) == 0 && isdigit(i) == 0)))
		{
			printf("\033[31mft_isdigit(%ld) != isdigit(%ld) || %d != %d\033[0m\n", i, i, ft_isdigit(i), isdigit(i));
			return (1);
		}
		if (!((ft_isblank(i) != 0 && isblank(i) != 0) || (ft_isblank(i) == 0 && isblank(i) == 0)))
		{
			printf("\033[31mft_isblank(%ld) != isblank(%ld) || %d != %d\033[0m\n", i, i, ft_isblank(i), isblank(i));
			return (1);
		}
		if (!((ft_isprint(i) != 0 && isprint(i) != 0) || (ft_isprint(i) == 0 && isprint(i) == 0)))
		{
			printf("\033[31mft_isprint(%ld) != isprint(%ld) || %d != %d\033[0m\n", i, i, ft_isprint(i), isprint(i));
			return (1);
		}
		if (!((ft_isalnum(i) != 0 && isalnum(i) != 0) || (ft_isalnum(i) == 0 && isalnum(i) == 0)))
		{
			printf("\033[31mft_isalnum(%ld) != isalnum(%ld) || %d != %d\033[0m\n", i, i, ft_isalnum(i), isalnum(i));
			return (1);
		}
		if (!((ft_iscntrl(i) != 0 && iscntrl(i) != 0) || (ft_iscntrl(i) == 0 && iscntrl(i) == 0)))
		{
			printf("\033[31mft_iscntrl(%ld) != iscntrl(%ld) || %d != %d\033[0m\n", i, i, ft_iscntrl(i), iscntrl(i));
			return (1);
		}
		if (!((ft_isgraph(i) != 0 && isgraph(i) != 0) || (ft_isgraph(i) == 0 && isgraph(i) == 0)))
		{
			printf("\033[31mft_isgraph(%ld) != isgraph(%ld) || %d != %d\033[0m\n", i, i, ft_isgraph(i), isgraph(i));
			return (1);
		}
		if (!((ft_islower(i) != 0 && islower(i) != 0) || (ft_islower(i) == 0 && islower(i) == 0)))
		{
			printf("\033[31mft_islower(%ld) != islower(%ld) || %d != %d\033[0m\n", i, i, ft_islower(i), islower(i));
			return (1);
		}
		if (!((ft_ispunct(i) != 0 && ispunct(i) != 0) || (ft_ispunct(i) == 0 && ispunct(i) == 0)))
		{
			printf("\033[31mft_ispunct(%ld) != ispunct(%ld) || %d != %d\033[0m\n", i, i, ft_ispunct(i), ispunct(i));
			return (1);
		}
		if (!((ft_isspace(i) != 0 && isspace(i) != 0) || (ft_isspace(i) == 0 && isspace(i) == 0)))
		{
			printf("\033[31mft_isspace(%ld) != isspace(%ld) || %d != %d\033[0m\n", i, i, ft_isspace(i), isspace(i));
			return (1);
		}
		if (!((ft_isxdigit(i) != 0 && isxdigit(i) != 0) || (ft_isxdigit(i) == 0 && isxdigit(i) == 0)))
		{
			printf("\033[31mft_isxdigit(%ld) != isxdigit(%ld) || %d != %d\033[0m\n", i, i, ft_isxdigit(i), isxdigit(i));
			return (1);
		}
	}
	return (0);
}