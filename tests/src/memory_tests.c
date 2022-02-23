/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:15:43 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/22 15:25:40 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/memory.h"
#include <stdio.h>
#include <string.h>

#define YELLOW "\033[33m"
#define GREEN "\033[32m"
#define RED "\033[31m"

int main(void)
{
	int		*test_one;
	char	*test_two;
	int		*test_three;
	int		*test_four;
	int		*test_five;


	puts("\033[33mRunning 'memory' tests...");
	printf("malloc : 50 bytes -> ");
	ft_malloc((void *)&test_one, sizeof(int), 50);
	printf("%p\n", test_one);
	printf("malloc : 2048 bytes -> ");
	ft_malloc((void *)&test_two, sizeof(char), 2048);
	printf("%p\n", test_two);
	printf("malloc : 60000 bytes -> ");
	ft_malloc((void *)&test_three, sizeof(int), 60000);
	printf("%p\n", test_three);
	printf("malloc : 100 bytes -> ");
	ft_malloc((void *)&test_four, sizeof(int), 100);
	printf("%p\n", test_four);
	printf("malloc : 100 bytes -> ");
	ft_malloc((void *)&test_five, sizeof(int), 100);
	printf("%p\n", test_five);
	// Check if any pointer is NULL
	if (!test_one || !test_two || !test_three || !test_four || !test_five)
	{
		puts("\033[31mFAIL: A malloc failed\033[0m");
		return (1);
	}
	// Check if the pointers are different
	if ((void *) test_one == (void *) test_two || (void *) test_one == (void *) test_three || (void *) test_two == (void *) test_three || (void *) test_one == (void *) test_four || (void *) test_one == (void *) test_five || (void *) test_two == (void *) test_four || (void *) test_two == (void *) test_five || (void *) test_three == (void *) test_four || (void *) test_three == (void *) test_five || (void *) test_four == (void *) test_five)
	{
		puts("\033[31mFAIL: Overlapping memory\033[0m");
		return (1);
	}
	// Fill memory with 1s
	memset(test_one, 1, 50);
	memset(test_two, 1, 2048);
	memset(test_three, 1, 60000);
	memset(test_four, 1, 100);
	memset(test_five, 1, 100);
	
	// Free 4th
	ft_free((void *)&test_four);
	// Double free
	ft_free((void *)&test_four);
	// Full free memory
	ft_full_free();
	// Double full free
	ft_full_free();
	puts("\033[32mSUCCESS\033[0m");
	return (0);
}