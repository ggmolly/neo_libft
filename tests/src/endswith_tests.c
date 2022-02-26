/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   endswith_tests.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 19:24:35 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/26 19:27:19 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/string.h"
#include "../../includes/bool.h"
#include "../../includes/assert.h"
#include "../../includes/memory.h"

int main(void)
{
	char *test_1 = ft_strdup("abcdef");
	char *test_1_suff = ft_strdup("def");
	
	char *test_2 = ft_strdup("dddddd");
	char *test_2_suff = ft_strdup("abc");
	
	char *test_3 = ft_strdup("d");
	char *test_3_suff = ft_strdup("ddddddddd");
	
	char *test_4 = ft_strdup("Eeeeee");
	char *test_4_suff = ft_strdup("eeeee");
	
	char *test_5 = ft_strdup("Je suis");
	char *test_5_suff = ft_strdup("is");
	
	char *test_6 = ft_strdup("  salut  ");
	char *test_6_suff = ft_strdup(" ");
	
	char *test_7 = ft_strdup("");
	char *test_7_suff = ft_strdup("");
	
	char *test_8 = ft_strdup("132465791874860504867085748570404567832");
	char *test_8_suff = ft_strdup("132465791874860504867085748570404567832");
	
	char *test_9 = ft_strdup("3152461584685794856");
	char *test_9_suff = ft_strdup("3152461589999999");

	assert_verbose(ft_endswith(test_1, test_1_suff) == true, "test_1 failed", "test_1 passed");
	assert_verbose(ft_endswith(test_2, test_2_suff) == false, "test_2 failed", "test_2 passed");
	assert_verbose(ft_endswith(test_3, test_3_suff) == false, "test_3 failed", "test_3 passed");
	assert_verbose(ft_endswith(test_4, test_4_suff) == true, "test_4 failed", "test_4 passed");
	assert_verbose(ft_endswith(test_5, test_5_suff) == true, "test_5 failed", "test_5 passed");
	assert_verbose(ft_endswith(test_6, test_6_suff) == true, "test_6 failed", "test_6 passed");
	assert_verbose(ft_endswith(test_7, test_7_suff) == true, "test_7 failed", "test_7 passed");
	assert_verbose(ft_endswith(test_8, test_8_suff) == true, "test_8 failed", "test_8 passed");
	assert_verbose(ft_endswith(test_9, test_9_suff) == false, "test_9 failed", "test_9 passed");

	ft_full_free();
}