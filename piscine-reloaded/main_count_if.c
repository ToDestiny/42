/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 11:45:11 by acolas            #+#    #+#             */
/*   Updated: 2017/04/20 12:05:09 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char *))
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (tab == 0)
		return (0);
	while (tab[i] != 0)
	{
		if ((*f)(tab[i]))
			count++;
		i++;
	}
	return (count);
}

#include <stdio.h>

int	cmp(char *str)
{
	return (*str == 'w');
}

int		main(void)
{
	char *t[] = {"wololo", "walala", "wilili", "zololo", 0};
	printf("%d\n", ft_count_if(t, cmp));
	return (0);
}
