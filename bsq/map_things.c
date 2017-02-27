/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_things.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 16:45:07 by bmontoya          #+#    #+#             */
/*   Updated: 2017/02/01 19:43:01 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "map_header.h"

int			initialize_globals(char *str)
{
	int i;
	int mc;

	i = 0;
	mc = 0;
	if (!*str)
		return (0);
	while (str[i] != '\n' && str[i])
		i++;
	if (i >= 4)
	{
		g_full = str[i - 1];
		g_obstacle = str[i - 2];
		g_empty = str[i - 3];
		str[i - 3] = '\0';
		if (!(g_size = ft_atoi(str)) || g_full == g_obstacle ||
				g_full == g_empty ||
				g_empty == g_obstacle)
			return (0);
	}
	else
		return (0);
	return (i);
}

char		**create_map(char *str, int lines, int i)
{
	char	**map;

	if (!(map = (char**)malloc(sizeof(*map) * (g_size + 1))))
		return (0);
	while (str[++i] && lines <= g_size)
	{
		if (str[i] == '\n')
		{
			if (lines == 1)
				g_width = i - 1;
			else if ((g_width + 1) * lines != i)
				break ;
			str[i] = '\0';
			if (str[i + 1])
				map[lines++] = str + i + 1;
			else
				break ;
		}
		else if (str[i] != g_empty && str[i] != g_obstacle)
			return (0);
	}
	if (lines != g_size || (g_width + 1) * lines != i)
		return (0);
	map[lines] = 0;
	return (map);
}

int			check_edges(char **map, int row, int col, int cmax)
{
	int flag;
	int trow;
	int tcol;

	flag = 1;
	trow = 0;
	tcol = 0;
	while (trow < cmax + 1 && trow + row < g_size && flag)
	{
		flag = (map[row + trow][col] == g_empty) ? 1 : 0;
		if (!flag)
			break ;
		flag = (map[row + trow][col + cmax] == g_empty) ? 1 : 0;
		trow++;
	}
	while (tcol < cmax + 1 && tcol + col < g_width && flag)
	{
		flag = (map[row][col + tcol] == g_empty) ? 1 : 0;
		if (!flag)
			break ;
		flag = (map[row + cmax][col + tcol] == g_empty) ? 1 : 0;
		tcol++;
	}
	return (flag);
}

void		resolve_map(char **map, int cmax, int row)
{
	int col;
	int crow;
	int ccol;

	while (++row + cmax < g_size && cmax < g_width && cmax < g_size)
	{
		col = -1;
		while (++col + cmax < g_width && cmax < g_width && cmax < g_size)
		{
			if (map[row][col] == g_empty)
			{
				if (!cmax || check_edges(map, row, col, cmax))
				{
					if (!cmax || check_inside(map, row, col, cmax + 1))
					{
						cmax++;
						crow = row;
						ccol = col;
						col--;
					}
				}
			}
		}
	}
	print_solution(map, crow, ccol, cmax);
}

int			solve_map(char *str)
{
	char	**map;
	int		diff;

	if (!(diff = initialize_globals(str)))
		return (error());
	if (!(map = create_map(str + diff, 0, -1)))
		return (error());
	resolve_map(map, 0, -1);
	return (1);
}
