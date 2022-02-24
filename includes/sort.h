/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:08:01 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/24 12:40:27 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

#include <unistd.h>

// -- compare functions --
int	int_compare(void *n1, void *n2);
int	double_compare(void *n1, void *n2);
int	float_compare(void *n1, void *n2);
int	char_compare(void *n1, void *n2);

// -- sort algorithms --
void	ft_shell_sort(void *arr, size_t array_size, size_t elem_size, int (*cmp)(void *, void *));
#endif