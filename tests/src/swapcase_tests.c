/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapcase_tests.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:28:26 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/26 16:30:37 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../includes/string.h"
#include "../../includes/assert.h"
#include "../../includes/memory.h"

int main(void)
{
	char *test_1 = ft_strdup("hello world");
	char *test_2 = ft_strdup("Hello World");
	char *test_3 = ft_strdup("HELLO WORLD");
	char *test_4 = ft_strdup("hElLo wORLD");
	char *test_5 = ft_strdup("h");
	char *test_6 = ft_strdup("a b c d e f");
	char *test_7 = ft_strdup("");
	char *test_8 = ft_strdup("aA1bB2cC3dD4eE5fF6gG7hH8iI9jJ0");
	char *test_9 = ft_strdup("aAbBcCdDeEfFgGhHiIjJ");
	
	ft_swapcase(test_1);
	ft_swapcase(test_2);
	ft_swapcase(test_3);
	ft_swapcase(test_4);
	ft_swapcase(test_5);
	ft_swapcase(test_6);
	ft_swapcase(test_7);
	ft_swapcase(test_8);
	ft_swapcase(test_9);

	assert_verbose(ft_strcmp(test_1, "HELLO WORLD") == 0, "test_1 failed", "test_1 passed");
	assert_verbose(ft_strcmp(test_2, "hELLO wORLD") == 0, "test_2 failed", "test_2 passed");
	assert_verbose(ft_strcmp(test_3, "hello world") == 0, "test_3 failed", "test_3 passed");
	assert_verbose(ft_strcmp(test_4, "HeLlO World") == 0, "test_4 failed", "test_4 passed");
	assert_verbose(ft_strcmp(test_5, "H") == 0, "test_5 failed", "test_5 passed");
	assert_verbose(ft_strcmp(test_6, "A B C D E F") == 0, "test_6 failed", "test_6 passed");
	assert_verbose(ft_strcmp(test_7, "") == 0, "test_7 failed", "test_7 passed");
	assert_verbose(ft_strcmp(test_8, "Aa1Bb2Cc3Dd4Ee5Ff6Gg7Hh8Ii9Jj0") == 0, "test_8 failed", "test_8 passed");
	assert_verbose(ft_strcmp(test_9, "AaBbCcDdEeFfGgHhIiJj") == 0, "test_9 failed", "test_9 passed");

	ft_full_free();
	return (0);
}