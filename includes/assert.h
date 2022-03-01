/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:24:52 by jallerha          #+#    #+#             */
/*   Updated: 2022/03/01 14:18:12 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSERT_H
# define ASSERT_H
# include "../includes/string.h"

void	assert(int condition);
void	assert_msg(int condition, char *msg);
void	assert_verbose(int condition, char *fail, char *success);
#endif