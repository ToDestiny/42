/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 17:12:47 by acolas            #+#    #+#             */
/*   Updated: 2017/04/11 17:18:23 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	unsigned int	i;
	int				*tab;

	i = 0;
	if (min >= max)
		return (0);
	tab = (int*)malloc(sizeof(int) * (max - min) + 1);
	if (tab == 0)
		return (0);
	else
	{
		while (min < max)
		{
			tab[i] = min;
			i++;
			min++;
		}
	}
	return (tab);
}
