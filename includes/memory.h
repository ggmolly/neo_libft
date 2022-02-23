/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:43:03 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/22 16:14:03 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
# define MEMORY_H
# include <stdlib.h>

typedef struct s_alloc_lst {
	void				*ptr;
	struct s_alloc_lst	*next;
}	t_alloc_lst;

int	ft_malloc(void *ptr, const size_t type_size, const size_t size);
int	ft_free(void *ptr);
int	ft_full_free(void);
#endif