/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strset_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:27:26 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/22 19:45:02 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/string.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[10][10] = {
		"AAA",
		"AAAA",
		"ABCDEF",
		"",
		"123456789",
		"n",
		"      ",
		"  ",
		"777777777",
		"888888888",
	};
	
	for (int i = 0; i < 5; i++)
	{
		t_string a = ft_init_string(str[i]);
		ft_strset(&a, '*');
		switch (i)
		{
		case 0:
			if (strcmp(a.str, "***") != 0)
			{
				printf("\033[31m%s\n", a.str);
				return (1);
			} else {
				printf("\033[32m%s\n", a.str);
			}
			break;
		case 1:
			if (strcmp(a.str, "****") != 0)
			{
				printf("\033[31m%s\n", a.str);
				return (1);
			} else {
				printf("\033[32m%s\n", a.str);
			}
			break;
		case 2:
			if (strcmp(a.str, "******") != 0)
			{
				printf("\033[31m%s\n", a.str);
				return (1);
			} else {
				printf("\033[32m%s\n", a.str);
			}
			break;
		case 3:
			if (strcmp(a.str, "") != 0)
			{
				printf("\033[31m%s\n", a.str);
				return (1);
			} else {
				printf("\033[32m%s\n", a.str);
			}
			break;
		case 4:
			if (strcmp(a.str, "*********") != 0)
			{
				printf("\033[31m%s\n", a.str);
				return (1);
			} else {
				printf("\033[32m%s\n", a.str);
			}
			break;
		}
	}
	puts("\033[32mOK");
	for (int i = 5; i < 10; i++)
	{
		t_string a = ft_init_string(str[i]);
		ft_strnset(&a, '*', 1);
		// Check if first char is a *
		if (a.str[0] != '*')
		{
			printf("\033[31m%s\n", a.str);
			return (1);
		} else {
			printf("\033[32m%s\n", a.str);
		}
	}
	return (0);
}