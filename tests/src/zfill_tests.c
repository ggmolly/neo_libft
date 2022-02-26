/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zfill_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:26:32 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/26 17:32:31 by jallerha         ###   ########.fr       */
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
	
	ft_zfill(test_1, 15);
	ft_zfill(test_2, 15);
	ft_zfill(test_3, 15);
	ft_zfill(test_4, 15);
	ft_zfill(test_5, 15);
	ft_zfill(test_6, 15);
	ft_zfill(test_7, 15);
	ft_zfill(test_8, 15);
	ft_zfill(test_9, 15);

	assert_verbose(ft_strcmp(test_1, "0000hello world") == 0, "test_1 failed", "test_1 passed");
	assert_verbose(ft_strcmp(test_2, "0000Hello world") == 0, "test_2 failed", "test_2 passed");
	assert_verbose(ft_strcmp(test_3, "0000HELLO WORLD") == 0, "test_3 failed", "test_3 passed");
	assert_verbose(ft_strcmp(test_4, "0000hElLo wORLD") == 0, "test_4 failed", "test_4 passed");
	assert_verbose(ft_strcmp(test_5, "00000000000000h") == 0, "test_5 failed", "test_5 passed");
	assert_verbose(ft_strcmp(test_6, "0000a b c d e f") == 0, "test_6 failed", "test_6 passed");
	assert_verbose(ft_strcmp(test_7, "000000000000000") == 0, "test_7 failed", "test_7 passed");
	assert_verbose(ft_strcmp(test_8, "00000000000000 ") == 0, "test_8 failed", "test_8 passed");
	assert_verbose(ft_strcmp(test_9, "AS4-fDSF7-fc1xs48-FD41c asd4c1v7F 1SDF7421xv8a 1a8v7c1 a67r1c") == 0, "test_9 failed", "test_9 passed");

	ft_full_free();
	return (0);
}