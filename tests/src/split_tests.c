/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 21:17:58 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/28 21:54:57 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/string.h"
#include "../../includes/printf.h"
#include "../../includes/memory.h"
#include "../../includes/assert.h"
#include "../../includes/lists.h"

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
	
	t_chain_lst *tab_1 = ft_split(test_1, " ");
	t_chain_lst *tab_2 = ft_split(test_2, "how");
	t_chain_lst *tab_3 = ft_split(test_3, " ");
	t_chain_lst *tab_4 = ft_split(test_4, " ");
	t_chain_lst *tab_5 = ft_split(test_5, " ");
	t_chain_lst *tab_6 = ft_split(test_6, "-");
	t_chain_lst *tab_7 = ft_split(test_7, "hDi");
	t_chain_lst *tab_8 = ft_split(test_8, ",");
	t_chain_lst *tab_9 = ft_split(test_9, "|");
	
	// Check tab_1
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_1, 0)->content, ft_strdup("Hello")) == 0, "tab_1[0] is invalid", "tab_1[0] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_1, 1)->content, ft_strdup("world")) == 0, "tab_1[1] is invalid", "tab_1[1] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_1, 2)->content, ft_strdup("how")) == 0, "tab_1[2] is invalid", "tab_1[2] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_1, 3)->content, ft_strdup("are")) == 0, "tab_1[3] is invalid", "tab_1[3] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_1, 4)->content, ft_strdup("you")) == 0, "tab_1[4] is invalid", "tab_1[4] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_1, 5)->content, ft_strdup("doing")) == 0, "tab_1[5] is invalid", "tab_1[5] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_1, 6)->content, ft_strdup("?")) == 0, "tab_1[6] is invalid", "tab_1[6] is valid");

	// Check tab_2
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_2, 0)->content, ft_strdup("Hello world ")) == 0, "tab_2[0] is invalid", "tab_2[0] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_2, 1)->content, ft_strdup(" are you doing ?")) == 0, "tab_2[1] is invalid", "tab_2[1] is valid");
	
	// Check tab_3
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_3, 0)->content, ft_strdup("Hello!")) == 0, "tab_3[0] is invalid", "tab_3[0] is valid");

	// Check tab_4
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_4, 0)->content, ft_strdup("Hello")) == 0, "tab_4[0] is invalid", "tab_4[0] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_4, 1)->content, ft_strdup("!")) == 0, "tab_4[1] is invalid", "tab_4[1] is valid");

	// Check tab_5
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_5, 0)->content, ft_strdup("a")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_5, 1)->content, ft_strdup("b")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_5, 2)->content, ft_strdup("c")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_5, 3)->content, ft_strdup("d")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_5, 4)->content, ft_strdup("e")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_5, 5)->content, ft_strdup("f")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_5, 6)->content, ft_strdup("g")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_5, 7)->content, ft_strdup("h")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_5, 8)->content, ft_strdup("i")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_5, 9)->content, ft_strdup("j")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_5, 10)->content, ft_strdup("k")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_5, 11)->content, ft_strdup("l")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_5, 12)->content, ft_strdup("m")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_5, 13)->content, ft_strdup("n")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_5, 14)->content, ft_strdup("o")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_5, 15)->content, ft_strdup("p")) == 0, "tab_5[0] is invalid", "tab_5[0] is valid");
	
	// Check tab_6
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_6, 0)->content, ft_strdup("0")) == 0, "tab_6[0] is invalid", "tab_6[0] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_6, 1)->content, ft_strdup("1")) == 0, "tab_6[1] is invalid", "tab_6[1] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_6, 2)->content, ft_strdup("2")) == 0, "tab_6[2] is invalid", "tab_6[2] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_6, 3)->content, ft_strdup("3")) == 0, "tab_6[3] is invalid", "tab_6[3] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_6, 4)->content, ft_strdup("4")) == 0, "tab_6[4] is invalid", "tab_6[4] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_6, 5)->content, ft_strdup("5")) == 0, "tab_6[5] is invalid", "tab_6[5] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_6, 6)->content, ft_strdup("6")) == 0, "tab_6[6] is invalid", "tab_6[6] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_6, 7)->content, ft_strdup("7")) == 0, "tab_6[7] is invalid", "tab_6[7] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_6, 8)->content, ft_strdup("8")) == 0, "tab_6[8] is invalid", "tab_6[8] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_6, 9)->content, ft_strdup("9")) == 0, "tab_6[9] is invalid", "tab_6[9] is valid");

	// Check tab_7
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_7, 0)->content, ft_strdup("oaju")) == 0, "tab_7[0] is invalid", "tab_7[0] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_7, 1)->content, ft_strdup("ujlas")) == 0, "tab_7[0] is invalid", "tab_7[0] is valid");
	
	// Check tab_8
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_8, 0)->content, ft_strdup("im")) == 0, "tab_8[0] is invalid", "tab_8[0] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_8, 1)->content, ft_strdup("a")) == 0, "tab_8[1] is invalid", "tab_8[1] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_8, 2)->content, ft_strdup("csv")) == 0, "tab_8[2] is invalid", "tab_8[2] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_8, 3)->content, ft_strdup("file")) == 0, "tab_8[3] is invalid", "tab_8[3] is valid");
	
	// Check tab_9
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_9, 0)->content, ft_strdup("im")) == 0, "tab_9[0] is invalid", "tab_9[0] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_9, 1)->content, ft_strdup("a")) == 0, "tab_9[1] is invalid", "tab_9[1] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_9, 2)->content, ft_strdup("psv")) == 0, "tab_9[2] is invalid", "tab_9[2] is valid");
	assert_verbose(ft_strcmp((char *) ft_chain_get(tab_9, 3)->content, ft_strdup("file")) == 0, "tab_9[3] is invalid", "tab_9[3] is valid");
	ft_full_free();
}