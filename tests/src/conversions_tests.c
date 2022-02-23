/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions_tests.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:00:09 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/22 15:52:56 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/conversions.h"
#include "../../includes/chartype.h"
#include "../../includes/memory.h"
#include <string.h>
#include <stdio.h>

#define YELLOW "\033[33m"
#define GREEN "\033[32m"
#define RED "\033[31m"

int main(void)
{
	puts("\033[33mRunning 'conversions' tests...");
	printf("ft_itoa : -2147483648 -> %s\n", ft_itoa(-2147483648));
	printf("ft_itoa : -2147483647 -> %s\n", ft_itoa(-2147483647));
	printf("ft_itoa : 0 -> %s\n", ft_itoa(0));
	printf("ft_itoa : 1 -> %s\n", ft_itoa(1));
	printf("ft_itoa : 2147483647 -> %s\n", ft_itoa(2147483647));
	puts("\n");
	// Compare programmatically with the C library
	if (strcmp(ft_itoa(-2147483648), "-2147483648") != 0)
	{
		puts("\033[31mFAIL: ft_itoa(-2147483648) != -2147483648\033[0m");
		ft_full_free();
		return (1);
	}
	if (strcmp(ft_itoa(-2147483647), "-2147483647") != 0)
	{
		puts("\033[31mFAIL: ft_itoa(-2147483647) != -2147483647\033[0m");
		ft_full_free();
		return (1);
	}
	if (strcmp(ft_itoa(0), "0") != 0)
	{
		puts("\033[31mFAIL: ft_itoa(0) != 0\033[0m");
		ft_full_free();
		return (1);
	}
	if (strcmp(ft_itoa(1), "1") != 0)
	{
		puts("\033[31mFAIL: ft_itoa(1) != 1\033[0m");
		ft_full_free();
		return (1);
	}
	if (strcmp(ft_itoa(2147483647), "2147483647") != 0)
	{
		puts("\033[31mFAIL: ft_itoa(2147483647) != 2147483647\033[0m");
		ft_full_free();
		return (1);
	}
	puts("\033[32mSUCCESS: ft_itoa() works correctly\033[0m");
	ft_full_free();

	// ATOI
	puts("\n\033[33mRunning 'atoi' tests...");
	printf("ft_atoi : \"-2147483648\" -> %d\n", ft_atoi("-2147483648"));
	printf("ft_atoi : \"-2147483647\" -> %d\n", ft_atoi("-2147483647"));
	printf("ft_atoi : \"0\" -> %d\n", ft_atoi("0"));
	printf("ft_atoi : \"1\" -> %d\n", ft_atoi("1"));
	printf("ft_atoi : \"2147483647\" -> %d\n", ft_atoi("2147483647"));
	puts("\n");
	// Compare programmatically with the C library
	if (ft_atoi("-2147483648") != atoi("-2147483648"))
	{
		puts("\033[31mFAIL: ft_atoi(-2147483648) != -2147483648\033[0m");
		ft_full_free();
		return (1);
	}
	if (ft_atoi("-2147483647") != atoi("-2147483647"))
	{
		puts("\033[31mFAIL: ft_atoi(-2147483647) != -2147483647\033[0m");
		ft_full_free();
		return (1);
	}
	if (ft_atoi("0") != atoi("0"))
	{
		puts("\033[31mFAIL: ft_atoi(0) != 0\033[0m");
		ft_full_free();
		return (1);
	}
	if (ft_atoi("1") != atoi("1"))
	{
		puts("\033[31mFAIL: ft_atoi(1) != 1\033[0m");
		ft_full_free();
		return (1);
	}
	if (ft_atoi("2147483647") != atoi("2147483647"))
	{
		puts("\033[31mFAIL: ft_atoi(2147483647) != 2147483647\033[0m");
		ft_full_free();
		return (1);
	}
	puts("\033[32mSUCCESS: ft_atoi() works correctly\033[0m");
	ft_full_free();
	return (0);
}