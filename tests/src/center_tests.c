/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   center_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:55:44 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/27 20:02:49 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/string.h"
#include "../../includes/assert.h"
#include "../../includes/memory.h"
#include "../../includes/printf.h"

int main(void)
{
	char *test_1 = ft_strdup("hello world");
	char *test_2 = ft_strdup("Hello world");
	char *test_3 = ft_strdup("HELLO WORLD");
	char *test_4 = ft_strdup("hElLo wORLD");
	char *test_5 = ft_strdup("h");
	char *test_6 = ft_strdup("a b c d e f");
	char *test_7 = ft_strdup("");
	char *test_8 = ft_strdup(" ");
	char *test_9 = ft_strdup("AS4-fDSF7-fc1xs48-FD41c asd4c1v7F 1SDF7421xv8a 1a8v7c1 a67r1c");
	
	test_1 = ft_center(test_1, 6);
	test_2 = ft_center(test_2, 3);
	test_3 = ft_center(test_3, 6);
	test_4 = ft_center(test_4, 3);
	test_5 = ft_center(test_5, 6);
	test_6 = ft_center(test_6, 3);
	test_7 = ft_center(test_7, 6);
	test_8 = ft_center(test_8, 3);
	test_9 = ft_center(test_9, 6);

	assert_verbose(ft_strcmp(test_1, "   hello world   ") == 0, "test_1 failed", "test_1 passed");
	assert_verbose(ft_strcmp(test_2, " Hello world  ") == 0, "test_2 failed", "test_2 passed");
	assert_verbose(ft_strcmp(test_3, "   HELLO WORLD   ") == 0, "test_3 failed", "test_3 passed");
	assert_verbose(ft_strcmp(test_4, " hElLo wORLD  ") == 0, "test_4 failed", "test_4 passed");
	assert_verbose(ft_strcmp(test_5, "   h   ") == 0, "test_5 failed", "test_5 passed");
	assert_verbose(ft_strcmp(test_6, " a b c d e f  ") == 0, "test_6 failed", "test_6 passed");
	assert_verbose(ft_strcmp(test_7, "      ") == 0, "test_7 failed", "test_7 passed");
	assert_verbose(ft_strcmp(test_8, "    ") == 0, "test_8 failed", "test_8 passed");
	assert_verbose(ft_strcmp(test_9, "   AS4-fDSF7-fc1xs48-FD41c asd4c1v7F 1SDF7421xv8a 1a8v7c1 a67r1c   ") == 0, "test_9 failed", "test_9 passed");

	ft_full_free();
	return (0);
}