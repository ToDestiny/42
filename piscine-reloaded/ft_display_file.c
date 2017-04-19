/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 16:33:50 by acolas            #+#    #+#             */
/*   Updated: 2017/04/19 18:50:16 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int		main(int argc, char **argv)
{
	char	buf[SIZE_BUFF];
	int		fd;
	int		n;

	if (argc == 1)
		write(2, "File name missing.\n", 20);
	else if (argc == 2)
	{
		if ((fd = open(argv[1], O_RDONLY)) >= 0)
		{
			while ((n = read(fd, buf, SIZE_BUFF)) > 0)
				write(1, buf, n);
			close(fd);
			return (0);
		}
		else
			return (0);
	}
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
}
