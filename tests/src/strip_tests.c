/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strip_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:41:21 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/26 18:26:09 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/string.h"
#include "../../includes/assert.h"
#include "../../includes/memory.h"
#include "../../includes/printf.h"

int main(void)
{
	char *test_1 = ft_strdup("\n\r\t Hello World\n\r\t");
	char *test_2 = ft_strdup("\n\r\t\n\r\t");
	char *test_3 = ft_strdup("                 Hello");

	char *test_4 = ft_strdup("\n\r\t Hello World\n\r\t");
	char *test_5 = ft_strdup("\n\r\t\n\r\t");
	char *test_6 = ft_strdup("				 Hello");
	
	char *test_7 = ft_strdup("\n\r\t Hello World\n\r\t");
	char *test_8 = ft_strdup("\n\r\t\n\r\t");
	char *test_9 = ft_strdup("				 Hello");

	// strip
	ft_strip(test_1);
	ft_strip(test_2);
	ft_strip(test_3);

	// lstrip
	ft_lstrip(test_4);
	ft_lstrip(test_5);
	ft_lstrip(test_6);
	
	// rstrip
	ft_rstrip(test_7);
	ft_rstrip(test_8);
	ft_rstrip(test_9);

	// compare
	assert_verbose(ft_strcmp(test_1, "Hello World") == 0, "test_1 failed", "test_1 passed");
	assert_verbose(ft_strcmp(test_2, "") == 0, "test_2 failed", "test_2 passed");
	assert_verbose(ft_strcmp(test_3, "Hello") == 0, "test_3 failed", "test_3 passed");

	assert_verbose(ft_strcmp(test_4, "Hello World\n\r\t") == 0, "test_4 failed", "test_4 passed");
	assert_verbose(ft_strcmp(test_5, "") == 0, "test_5 failed", "test_5 passed");
	assert_verbose(ft_strcmp(test_6, "Hello") == 0, "test_6 failed", "test_6 passed");

	assert_verbose(ft_strcmp(test_7, "\n\r\t Hello World") == 0, "test_7 failed", "test_7 passed");
	assert_verbose(ft_strcmp(test_8, "") == 0, "test_8 failed", "test_8 passed");
	assert_verbose(ft_strcmp(test_9, "				 Hello") == 0, "test_9 failed", "test_9 passed");

	ft_full_free();
}