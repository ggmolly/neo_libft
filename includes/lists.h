/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:30:35 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/24 17:02:27 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LISTS_H
# define LISTS_H

#include <unistd.h>
typedef struct s_chain_lst
{
	void			*content;
	struct s_chain_lst	*next;
}				t_chain_lst;

typedef struct s_dchain_lst
{
	void			*content;
	struct s_dchain_lst	*next;
	struct s_dchain_lst	*prev;
}				t_dchain_lst;

typedef struct s_dcchain_lst
{
	t_dchain_lst		*first;
	t_dchain_lst		*cursor;
}				t_dcchain_lst;

// -- init --
t_chain_lst			*ft_chain_new(void *content);
t_dchain_lst		*ft_dchain_new(void *content);
t_dcchain_lst		*ft_dcchain_new(void *content);

// -- append --
void				ft_chain_append(t_chain_lst **lst, void *content);
void				ft_dchain_append(t_dchain_lst **lst, void *content);
void				ft_dcchain_append(t_dcchain_lst **lst, void *content); // TODO

// -- first --
t_chain_lst			*ft_chain_first(t_chain_lst *lst);
t_dchain_lst		*ft_dchain_first(t_dchain_lst *lst);
t_dchain_lst		*ft_dcchain_first(t_dcchain_lst *lst);

// -- last --
t_chain_lst			*ft_chain_last(t_chain_lst *lst);
t_dchain_lst		*ft_dchain_last(t_dchain_lst *lst);
t_dchain_lst		*ft_dcchain_last(t_dcchain_lst *lst);

// -- count -- 
int	ft_chain_count(t_chain_lst *lst);
int	ft_dchain_count(t_dchain_lst *lst);
int	ft_dcchain_count(t_dcchain_lst *lst); // TODO

// -- clear --
void	ft_chain_clear(t_chain_lst **lst);
void	ft_dchain_clear(t_dchain_lst **lst);
void	ft_dcchain_clear(t_dcchain_lst **lst); // TODO

// -- extend --
void	ft_chain_extend(t_chain_lst **lst, void *input, size_t size);
void	ft_dchain_extend(t_dchain_lst **lst, void *input, size_t size);
void	ft_dcchain_extend(t_dcchain_lst **lst, void *input, size_t size); // TODO

// -- prepend --
void	ft_chain_prepend(t_chain_lst **lst, void *content);
void	ft_dchain_prepend(t_dchain_lst **lst, void *content);
void	ft_dcchain_prepend(t_dcchain_lst **lst, void *content); // TODO


// -- copy --
t_chain_lst			*ft_chain_copy(t_chain_lst *lst); // TODO : Test

// -- pextend --
void	ft_chain_pextend(t_chain_lst **lst, void **input, size_t size); // TODO : Test

// -- index --
int	ft_chain_index(t_chain_lst *lst, void *content); // TODO : Test

// -- pop --
t_chain_lst	*ft_chain_pop(t_chain_lst **lst, int	index); // TODO : Test

// -- remove --
void	ft_chain_remove(t_chain_lst **lst, void *content); // TODO : Test

// -- insert --
void	ft_chain_insert(t_chain_lst **lst, void *content, int index); // TODO : Test

// -- reverse --
void	ft_chain_reverse(t_chain_lst **lst); // TODO : Test

// -- inject -- (used by insert)
void	ft_chain_inject(t_chain_lst **lst, t_chain_lst *prev,
		t_chain_lst *current, void *content);
#endif

// copy()		Returns a copy of the list
// pextend()	Add the elements of a list (or any iterable), to the start of the current lis
// index()		Returns the index of the first element with the specified value
// pop()		Removes the element at the specified position
// remove()		Removes the first item with the specified value
// insert()		Adds an element at the specified position
// reverse()	Reverses the order of the list

// Possible functions 	:
// sort()		Sorts the list, use the cmp argument to specify a key functions