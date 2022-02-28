/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_tests.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 22:25:48 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/28 23:06:32 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/lists.h"
#include "../../includes/string.h"
#include "../../includes/memory.h"
#include "../../includes/assert.h"
#include "../../includes/printf.h"

int main(void)
{
	t_chain_lst	*test_0;
	
	test_0 = ft_chain_init();

	ft_chain_append(&test_0, "Hello");
	ft_chain_append(&test_0, "world");

	assert_verbose(ft_strcmp("Hello world", ft_strjoin(" ", test_0)) == 0, "test_0 failed", "test_0 passed");
	assert_verbose(ft_strcmp("Hello---world", ft_strjoin("---", test_0)) == 0, "test_1 failed", "test_1 passed");
	assert_verbose(ft_strcmp("Hello, world", ft_strjoin(", ", test_0)) == 0, "test_2 failed", "test_2 passed");
	assert_verbose(ft_strcmp("Hello!!!world", ft_strjoin("!!!", test_0)) == 0, "test_3 failed", "test_3 passed");
	assert_verbose(ft_strcmp("Hello\nworld", ft_strjoin("\n", test_0)) == 0, "test_4 failed", "test_4 passed");
	
	ft_chain_clear(&test_0);
	test_0 = ft_chain_init();
	ft_chain_append(&test_0, "0");
	ft_chain_append(&test_0, "1");
	ft_chain_append(&test_0, "2");
	ft_chain_append(&test_0, "3");
	ft_chain_append(&test_0, "4");
	ft_chain_append(&test_0, "5");
	ft_chain_append(&test_0, "6");
	ft_chain_append(&test_0, "7");
	ft_chain_append(&test_0, "8");
	ft_chain_append(&test_0, "9");
	ft_chain_append(&test_0, "10");
	ft_chain_prepend(&test_0, "Counting from 0 to 10");
	assert_verbose(ft_strcmp("Counting from 0 to 10, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10", ft_strjoin(", ", test_0)) == 0, "test_5 failed", "test_5 passed");
	ft_full_free();
}