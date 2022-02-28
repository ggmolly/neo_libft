/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:30:35 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/28 22:01:24 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LISTS_H
# define LISTS_H

#include <unistd.h>

typedef struct s_chain_lst
{
	void			*content;
	struct s_chain_lst	*next;
	struct s_chain_lst	*prev;
}				t_chain_lst;

int			ft_chain_count(t_chain_lst *lst);
int			ft_chain_index(t_chain_lst *lst, void *content);
t_chain_lst	*ft_chain_copy(t_chain_lst *lst);
t_chain_lst	*ft_chain_first(t_chain_lst *lst);
t_chain_lst	*ft_chain_last(t_chain_lst *lst);
t_chain_lst	*ft_chain_new(void *content);
t_chain_lst	*ft_lst_init(void);
t_chain_lst *ft_chain_get(t_chain_lst *lst, int index);
void		ft_chain_append(t_chain_lst **lst, void *content);
void		ft_chain_clear(t_chain_lst **lst);
void		ft_chain_insert(t_chain_lst **lst, void *content, int index);
void		ft_chain_prepend(t_chain_lst **lst, void *content);
void		ft_chain_remove(t_chain_lst **lst, void *content);
void		ft_chain_reverse(t_chain_lst **lst);
void		*ft_chain_pop(t_chain_lst **lst, int index);
#endif