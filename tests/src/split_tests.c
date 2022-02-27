/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 21:17:58 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/27 20:48:53 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/string.h"
#include "../../includes/printf.h"
#include "../../includes/memory.h"
#include "../../includes/assert.h"

int main(void)
{
	char *test_1 = ft_strdup("Hello world how are you doing ?");
	char *test_2 = ft_strdup("Hello world how are you doing ?");
	char *test_3 = ft_strdup("Hello!");
	char *test_4 = ft_strdup("Hello !");
	char *test_5 = ft_strdup("a b c d e f g h i j k l m n o p");
	char *test_6 = ft_strdup("0-1-2-3-4-5-6-7-8-9");
	char *test_7 = ft_strdup("oajuhDiujlas");
	char *test_8 = ft_strdup("im,a,csv,file");
	char *test_9 = ft_strdup("im|a|psv|file");
	
	char **tab_1 = ft_split(test_1, " ");
	char **tab_2 = ft_split(test_2, "how");
	char **tab_3 = ft_split(test_3, " ");
	char **tab_4 = ft_split(test_4, " ");
	char **tab_5 = ft_split(test_5, " ");
	char **tab_6 = ft_split(test_6, "-");
	char **tab_7 = ft_split(test_7, "D");
	char **tab_8 = ft_split(test_8, ",");
	char **tab_9 = ft_split(test_9, "|");
	

	ft_printf("test_1: '%s'\n", tab_2[0]);
	// Check tab_1
	assert_verbose(ft_strcmp(tab_1[0], ft_strdup("Hello")) == 0, "tab_1[0] is invalid", "tab_1[0] is valid");
	assert_verbose(ft_strcmp(tab_1[1], ft_strdup("world")) == 0, "tab_1[1] is invalid", "tab_1[1] is valid");
	assert_verbose(ft_strcmp(tab_1[2], ft_strdup("how")) == 0, "tab_1[2] is invalid", "tab_1[2] is valid");
	assert_verbose(ft_strcmp(tab_1[3], ft_strdup("are")) == 0, "tab_1[3] is invalid", "tab_1[3] is valid");
	assert_verbose(ft_strcmp(tab_1[4], ft_strdup("you")) == 0, "tab_1[4] is invalid", "tab_1[4] is valid");
	assert_verbose(ft_strcmp(tab_1[5], ft_strdup("doing")) == 0, "tab_1[5] is invalid", "tab_1[5] is valid");
	assert_verbose(ft_strcmp(tab_1[6], ft_strdup("?")) == 0, "tab_1[6] is invalid", "tab_1[6] is valid");
	
	
	// Check tab_2
	assert_verbose(ft_strcmp(tab_2[0], ft_strdup("Hello world ")) == 0, "tab_2[0] is invalid", "tab_2[0] is valid");
	assert_verbose(ft_strcmp(tab_2[1], ft_strdup("are you doing ?")) == 0, "tab_2[1] is invalid", "tab_2[1] is valid");
	
	// Check tab_3
	assert_verbose(ft_strcmp(tab_3[0], ft_strdup("Hello!")) == 0, "tab_3[0] is invalid", "tab_3[0] is valid");

	// Check tab_4
	assert_verbose(ft_strcmp(tab_4[0], ft_strdup("Hello")) == 0, "tab_4[0] is invalid", "tab_4[0] is valid");
	assert_verbose(ft_strcmp(tab_4[1], ft_strdup("!")) == 0, "tab_4[1] is invalid", "tab_4[1] is valid");

	// Check tab_5
	assert_verbose(ft_strcmp(tab_5[0],  ft_strdup("a")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp(tab_5[1],  ft_strdup("b")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp(tab_5[2],  ft_strdup("c")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp(tab_5[3],  ft_strdup("d")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp(tab_5[4],  ft_strdup("e")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp(tab_5[5],  ft_strdup("f")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp(tab_5[6],  ft_strdup("g")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp(tab_5[7],  ft_strdup("h")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp(tab_5[8],  ft_strdup("i")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp(tab_5[9],  ft_strdup("j")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp(tab_5[10], ft_strdup("k")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp(tab_5[11], ft_strdup("l")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp(tab_5[12], ft_strdup("m")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp(tab_5[13], ft_strdup("n")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp(tab_5[14], ft_strdup("o")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp(tab_5[15], ft_strdup("p")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	
	// Check tab_6
	assert_verbose(ft_strcmp(tab_6[0], ft_strdup("0")) == 0, "tab_6[0] is invalid", "tab_6[0] is valid");
	assert_verbose(ft_strcmp(tab_6[1], ft_strdup("1")) == 0, "tab_6[1] is invalid", "tab_6[1] is valid");
	assert_verbose(ft_strcmp(tab_6[2], ft_strdup("2")) == 0, "tab_6[2] is invalid", "tab_6[2] is valid");
	assert_verbose(ft_strcmp(tab_6[3], ft_strdup("3")) == 0, "tab_6[3] is invalid", "tab_6[3] is valid");
	assert_verbose(ft_strcmp(tab_6[4], ft_strdup("4")) == 0, "tab_6[4] is invalid", "tab_6[4] is valid");
	assert_verbose(ft_strcmp(tab_6[5], ft_strdup("5")) == 0, "tab_6[5] is invalid", "tab_6[5] is valid");
	assert_verbose(ft_strcmp(tab_6[6], ft_strdup("6")) == 0, "tab_6[6] is invalid", "tab_6[6] is valid");
	assert_verbose(ft_strcmp(tab_6[7], ft_strdup("7")) == 0, "tab_6[7] is invalid", "tab_6[7] is valid");
	assert_verbose(ft_strcmp(tab_6[8], ft_strdup("8")) == 0, "tab_6[8] is invalid", "tab_6[8] is valid");
	assert_verbose(ft_strcmp(tab_6[9], ft_strdup("9")) == 0, "tab_6[9] is invalid", "tab_6[9] is valid");

	// Check tab_7
	assert_verbose(ft_strcmp(tab_7[0], ft_strdup("oajuh")) == 0, "tab_7[0] is invalid", "tab_7[0] is valid");
	assert_verbose(ft_strcmp(tab_7[1], ft_strdup("iujlas")) == 0, "tab_7[0] is invalid", "tab_7[0] is valid");
	
	// Check tab_8
	assert_verbose(ft_strcmp(tab_8[0], ft_strdup("im")) == 0, "tab_8[0] is invalid", "tab_8[0] is valid");
	assert_verbose(ft_strcmp(tab_8[1], ft_strdup("a")) == 0, "tab_8[1] is invalid", "tab_8[1] is valid");
	assert_verbose(ft_strcmp(tab_8[2], ft_strdup("csv")) == 0, "tab_8[2] is invalid", "tab_8[2] is valid");
	assert_verbose(ft_strcmp(tab_8[3], ft_strdup("file")) == 0, "tab_8[3] is invalid", "tab_8[3] is valid");
	
	// Check tab_9
	assert_verbose(ft_strcmp(tab_9[0], ft_strdup("im")) == 0, "tab_9[0] is invalid", "tab_9[0] is valid");
	assert_verbose(ft_strcmp(tab_9[1], ft_strdup("a")) == 0, "tab_9[1] is invalid", "tab_9[1] is valid");
	assert_verbose(ft_strcmp(tab_9[2], ft_strdup("psv")) == 0, "tab_9[2] is invalid", "tab_9[2] is valid");
	assert_verbose(ft_strcmp(tab_9[3], ft_strdup("file")) == 0, "tab_9[3] is invalid", "tab_9[3] is valid");
	ft_full_free();
}