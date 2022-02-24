/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tests.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:17:20 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/24 12:42:05 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/sort.h"
#include "../../includes/conversions.h"
#include "../../includes/memory.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	int *arr;

	ft_malloc(&arr, sizeof(int), argc - 1);
	for (int i = 0; i < argc - 1; i++)
		arr[i] = ft_atoi(argv[i + 1]);
	// Print array
	for (int i = 0; i < argc - 1; i++)
		printf("%d ", arr[i]);
	puts("");

	// Sort
	ft_shell_sort(arr, argc - 1, sizeof(int), int_compare);
	// Print sorted array
	for (int i = 0; i < argc - 1; i++)
		printf("%d ", arr[i]);
	puts("");
	return (0);
}