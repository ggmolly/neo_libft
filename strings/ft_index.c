/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jallerha <jallerha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 19:34:27 by jallerha          #+#    #+#             */
/*   Updated: 2022/02/26 19:35:00 by jallerha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_index(char *haybale, char *needle)
{
	int i;
	int j;
	int k;

	i = 0;
	while (haybale[i])
	{
		j = 0;
		k = i;
		while (needle[j])
		{
			if (haybale[k] != needle[j])
				break ;
			j++;
			k++;
		}
		if (!needle[j])
			return (i);
		i++;
	}
	return (-1);
}