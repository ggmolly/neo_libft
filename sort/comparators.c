/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparators.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:23:03 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/24 12:26:57 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	int_compare(void *n1, void *n2)
{
	return (*(int *)n1 - *(int *)n2);
}

int	double_compare(void *n1, void *n2)
{
	return (*(double *)n1 - *(double *)n2);
}

int	float_compare(void *n1, void *n2)
{
	return (*(float *)n1 - *(float *)n2);
}

int	char_compare(void *n1, void *n2)
{
	return (*(char *)n1 - *(char *)n2);
}
