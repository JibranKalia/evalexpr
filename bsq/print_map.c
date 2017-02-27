/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 15:45:51 by jkalia            #+#    #+#             */
/*   Updated: 2017/02/01 20:21:37 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_header.h"

void	print_line(char *str, int col, int size)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i < col)
			ft_putchar(str[i]);
		else if (i < (col + size))
			ft_putchar(g_full);
		else
			ft_putchar(str[i]);
		i++;
	}
}

void	print_solution(char **map, int row, int col, int size)
{
	int	i;

	i = 0;
	while (i < g_size)
	{
		if (i < row)
			ft_putstr(map[i]);
		else if (i < (row + size))
			print_line(map[i], col, size);
		else
			ft_putstr(map[i]);
		i++;
		ft_putchar('\n');
	}
}

void	print_map(char **map)
{
	int	i;

	i = -1;
	while (++i < g_size)
	{
		ft_putstr(map[i]);
		ft_putchar('\n');
	}
}
