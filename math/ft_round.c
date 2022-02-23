/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_round.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:18:51 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/23 12:19:53 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_round(float n)
{
	if (n - (int)n >= 0.5)
		return ((int)n + 1);
	return ((int)n);
}

int			ft_round_up(float n)
{
	return ((int)n + 1);
}

int			ft_round_down(float n)
{
	return ((int)n);
}