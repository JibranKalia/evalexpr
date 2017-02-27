/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 20:36:48 by jkalia            #+#    #+#             */
/*   Updated: 2017/02/01 21:35:24 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "map_header.h"

int			error(void)
{
	write(2, "map error\n", 10);
	return (0);
}

void		make_str(char **str)
{
	if (!(*str = (char*)malloc(sizeof(**str) * (BUFFER_SIZE + 1))))
		exit(0);
}

int			main(int argc, char **argv)
{
	int		i;
	int		file;
	int		rd;
	char	*str;

	make_str(&str);
	i = 0;
	if (argc == 1)
		std_input(str);
	else
	{
		while (++i < argc)
		{
			if ((file = open(argv[i], O_RDONLY)) != -1)
			{
				rd = read(file, str, BUFFER_SIZE);
				str[rd++] = '\0';
				solve_map(str);
				close(file);
			}
			else
				write(2, "map error\n", 10);
		}
	}
	return (0);
}
