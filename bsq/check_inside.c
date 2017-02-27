/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_inside.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 15:32:09 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/31 18:59:36 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_header.h"

int		check_inside(char **map, int row, int col, int size)
{
	int	i;
	int	j;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			if (map[row + j][col + i] != g_empty)
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}
