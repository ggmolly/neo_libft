/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chained_lst_tests.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:23:21 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/24 17:09:14 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/lists.h"
#include "../../includes/assert.h"
#include "../../includes/string.h"
#include "../../includes/memory.h"
#include "../../includes/ft_printf.h"
#include "../../includes/put.h"
#include "../../includes/constants.h"

int main(void)
{
	// Lambda ints
	int zero = 0;
	int one = 1;
	int two = 2;
	// Error strings
	t_string new_fail = ft_init_string("\033[1;31mKO : ft_chain_new() failed");
	t_string append_fail = ft_init_string("\033[1;31mKO : ft_chain_append() failed");
	t_string prepend_fail = ft_init_string("\033[1;31mKO : ft_chain_prepend() failed");
	t_string first_fail = ft_init_string("\033[1;31mKO : ft_chain_first() failed");
	t_string last_fail = ft_init_string("\033[1;31mKO : ft_chain_last() failed");
	t_string clear_fail = ft_init_string("\033[1;31mKO : ft_chain_clear() failed");
	t_string extend_fail = ft_init_string("\033[1;31mKO : ft_chain_extend() failed");
	// Success strings
	t_string new_success = ft_init_string("\033[1;32mOK : ft_chain_new() success");
	t_string append_success = ft_init_string("\033[1;32mOK : ft_chain_append() success");
	t_string prepend_success = ft_init_string("\033[1;32mOK : ft_chain_prepend() success");
	t_string first_success = ft_init_string("\033[1;32mOK : ft_chain_first() success");
	t_string last_success = ft_init_string("\033[1;32mOK : ft_chain_last() success");
	t_string clear_success = ft_init_string("\033[1;32mOK : ft_chain_clear() success");
	t_string extend_success = ft_init_string("\033[1;32mOK : ft_chain_extend() success");
	/* -------------- */
	ft_putendl_fd(ft_init_string("Begin tests on chained list"), STDERR);
	// Init a new list
	t_chain_lst *lst = ft_chain_new(&one);
	assert_verbose(lst != NULL, new_fail, new_success);
	assert_verbose(*(int *)lst->content == 1, new_fail, new_success);
	// Append new item
	ft_chain_append(&lst, &two);
	t_chain_lst *new = lst->next;
	assert_verbose(new != NULL, append_fail, append_success);
	assert_verbose(*(int *)new->content == 2, append_fail, append_success);
	// Prepend
	ft_chain_prepend(&lst, &zero);
	assert_verbose(*(int *)lst->content == 0, prepend_fail, prepend_success);
	
	t_chain_lst *first_item = ft_chain_first(lst);
	t_chain_lst *last_item = ft_chain_last(lst);
	assert_verbose(first_item != NULL, first_fail, first_success);
	assert_verbose(last_item != NULL, last_fail, last_success);
	// Check values
	assert_verbose(*(int *)first_item->content == 0, first_fail, first_success);
	assert_verbose(*(int *)last_item->content == 2, last_fail, last_success);
	// Clear the list to avoid leaks
	ft_chain_clear(&lst);
	assert_verbose(lst == NULL, clear_fail, clear_success);

	// Create a new list
	lst = ft_chain_new(&one);
	assert_verbose(lst != NULL, new_fail, new_success);
	assert_verbose(*(int *)lst->content == 1, new_fail, new_success);

	int *extend;
	ft_malloc(&extend, sizeof(int), 12);
	for (int i = 0; i < 12; i++)
		extend[i] = i;
	ft_chain_extend(&lst, &extend, 12); // Fails to compile
	for (int i = 0; i < 12; i++)
		assert_verbose(*(int *)lst->content == i, extend_fail, extend_success);
	ft_full_free();
}