/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 22:09:58 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/19 12:42:01 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		len;
	int		i;
	int		*ptr;

	i = 0;
	len = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ptr = (int*)malloc(sizeof(*ptr) * (len));
	while (i < len)
	{
		ptr[i] = min + i;
		i++;
	}
	*range = ptr;
	return (i);
}
