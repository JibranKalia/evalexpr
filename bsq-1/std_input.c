/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 19:33:02 by jkalia            #+#    #+#             */
/*   Updated: 2017/02/01 20:54:07 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map_header.h"
#include <stdlib.h>
#include <unistd.h>

char	*ft_realloc(char *buf, unsigned int size, unsigned int new_size)
{
	char			*res;
	unsigned int	i;

	res = (char*)malloc(new_size);
	i = 0;
	while (i < size)
	{
		res[i] = buf[i];
		i++;
	}
	free(buf);
	return (res);
}

void	std_input(char *str)
{
	int		b_read;
	int		b_size;
	int		i_read;

	i_read = 0;
	b_size = BUFFER_SIZE;
	while ((b_read = read(0, str + i_read, b_size - i_read)) > 0)
	{
		i_read += b_read;
		if (i_read >= b_size)
		{
			str = ft_realloc(str, b_size, b_size * 2);
			b_size *= 2;
		}
	}
	if (i_read == b_size)
	{
		str = ft_realloc(str, b_size, b_size + 1);
		b_size++;
	}
	str[b_size - 1] = '\0';
	solve_map(str);
}
