/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_tests.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 23:18:59 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/28 23:36:33 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/string.h"
#include "../../includes/assert.h"
#include "../../includes/memory.h"

int	main(void)
{
	char *test_0 = "Hello World";
	assert_verbose(ft_strcmp(ft_replace(test_0, "Hello", "Bonjour"), "Bonjour World") == 0, "test_0 failed", "test_0 passed");
	assert_verbose(ft_strcmp(ft_replace(test_0, "Hello World", "Bonjour"), "Bonjour") == 0, "test_1 failed", "test_1 passed");
	
	// v UNEXPECTED BEHAVIOR v
	assert_verbose(ft_strcmp(ft_replace(test_0, "Hello World", ""), "") == 0, "test_2 failed", "test_2 passed");
	// ^ UNEXPECTED BEHAVIOR ^
	
	assert_verbose(ft_strcmp(ft_replace(test_0, " ", "-"), "Hello-World") == 0, "test_3 failed", "test_3 passed");
	ft_full_free();
}