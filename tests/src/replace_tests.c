/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_tests.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 23:18:59 by jallerha          #+#    #+#             */
/*   Updated: 2022/03/01 11:58:01 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/string.h"
#include "../../includes/assert.h"
#include "../../includes/memory.h"
#include "../../includes/printf.h"

int	main(void)
{
	char *test_0 = "Hello World";
	
	char *res_0 = ft_replace(test_0, "Hello", "Bonjour");
	char *res_1 = ft_replace(test_0, "Hello World", "Bonjour");
	char *res_2 = ft_replace(test_0, "Hello World", "");
	char *res_3 = ft_replace(test_0, " ", "-");

	ft_printf("res_0 -> %s\n", res_0);
	ft_printf("res_1 -> %s\n", res_1);
	ft_printf("res_2 -> %s\n", res_2);
	ft_printf("res_3 -> %s\n", res_3);
	
	assert_verbose(ft_strcmp(res_0, "Bonjour World") == 0, "test_0 failed", "test_0 passed");
	assert_verbose(ft_strcmp(res_1, "Bonjour") == 0, "test_1 failed", "test_1 passed");
	
	// v UNEXPECTED BEHAVIOR v
	assert_verbose(ft_strcmp(res_2, "") == 0, "test_2 failed", "test_2 passed");
	// ^ UNEXPECTED BEHAVIOR ^
	
	assert_verbose(ft_strcmp(res_3, "Hello-World") == 0, "test_3 failed", "test_3 passed");
	ft_full_free();
}