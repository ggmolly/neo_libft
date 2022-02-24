/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:52:36 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/24 16:06:17 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/lists.h"
#include "../../includes/memory.h"

int main(void)
{
	// Test a basic instance of chained list
	t_chain_lst *lst;

	lst = ft_chain_new("Hello");
	ft_chain_append(&lst, "World");
	ft_chain_prepend(&lst, "Bonjour!");
	// Print the list
	t_chain_lst *tmp = lst;
	int i = 0;
	while (tmp)
	{
		printf("%s", (char *)tmp->content);
		tmp = tmp->next;
		i++;
	}
	puts("\n--- DCHAIN ----");
	ft_full_free();
}