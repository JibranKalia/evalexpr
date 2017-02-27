/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 12:14:35 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/26 13:55:45 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"

void	ft_error(int n)
{
	if (n == 0)
		ft_putstr("File name missing.\n");
	if (n == 1)
		ft_putstr("Too Many Arguments\n");
}

int		main(int argc, char **argv)
{
	int		fd;
	char	*buf;

	if (argc < 2)
	{
		ft_error(0);
		return (0);
	}
	if (argc > 2)
	{
		ft_error(1);
		return (0);
	}
	fd = open(argv[1], O_RDONLY | S_IRUSR);
	while (read(fd, &buf, 1))
	{
		write(1, &buf, 1);
	}
	close(fd);
}
