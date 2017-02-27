/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 12:49:24 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/19 12:43:17 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		len;
	int		i;
	int		*ptr;

	i = 0;
	len = max - min;
	if (min >= max)
		return (0);

	ptr = (int*)malloc(sizeof(*ptr) * (len));
	while (i < len)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
