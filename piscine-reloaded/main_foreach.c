/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 11:33:37 by acolas            #+#    #+#             */
/*   Updated: 2017/04/20 11:22:00 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = 0;
	if (tab == 0)
		return ;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb > 9)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

int		main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_foreach(tab, 9, &ft_putnbr);
	return (0);
}
