/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:12:43 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/22 19:27:23 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/string.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char strs[10][2][10] = {
		{"", ""},
		{"", "a"},
		{"a", ""},
		{"a", "a"},
		{"a", "b"},
		{"b", "a"},
		{"b", "b"},
		{"b", "c"},
		{"c", "b"},
		{"c", "c"}
	};
	for (int i = 0; i < 10; i++)
	{
		char dest_a[10];
		char src_a[10];
		char dest_b[10];
		char src_b[10];

		strcpy(dest_a, strs[i][0]);
		strcpy(src_a, strs[i][1]);
		strcpy(dest_b, strs[i][0]);
		strcpy(src_b, strs[i][1]);

		t_string a = ft_init_string(dest_a);
		t_string b = ft_init_string(src_a);
		ft_strcat(&a, &b);
		strcat(dest_b, src_b);
		
		// a and dest_b should be equal
		if (strcmp(a.str, dest_b) != 0)
		{
			printf("\033[31m%s\n", a.str);
			return (1);
		} else {
			printf("\033[32m%s\n", a.str);
		}
	}
}