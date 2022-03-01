/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   capitalize_tests.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:21:40 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/26 16:18:27 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/string.h"
#include "../../includes/assert.h"
#include "../../includes/memory.h"

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
	
	ft_capitalize(test_1);
	ft_capitalize(test_2);
	ft_capitalize(test_3);
	ft_capitalize(test_4);
	ft_capitalize(test_5);
	ft_capitalize(test_6);
	ft_capitalize(test_7);
	ft_capitalize(test_8);
	ft_capitalize(test_9);

	assert_verbose(ft_strcmp(test_1, "Hello World") == 0, "test_1 failed", "test_1 passed");
	assert_verbose(ft_strcmp(test_2, "Hello World") == 0, "test_2 failed", "test_2 passed");
	assert_verbose(ft_strcmp(test_3, "Hello World") == 0, "test_3 failed", "test_3 passed");
	assert_verbose(ft_strcmp(test_4, "Hello World") == 0, "test_4 failed", "test_4 passed");
	assert_verbose(ft_strcmp(test_5, "H") == 0, "test_5 failed", "test_5 passed");
	assert_verbose(ft_strcmp(test_6, "A B C D E F") == 0, "test_6 failed", "test_6 passed");
	assert_verbose(ft_strcmp(test_7, "") == 0, "test_7 failed", "test_7 passed");
	assert_verbose(ft_strcmp(test_8, " ") == 0, "test_8 failed", "test_8 passed");
	assert_verbose(ft_strcmp(test_9, "As4-Fdsf7-Fc1Xs48-Fd41C Asd4C1V7F 1Sdf7421Xv8A 1A8V7C1 A67R1C") == 0, "test_9 failed", "test_9 passed");

	ft_full_free();
	return (0);
}