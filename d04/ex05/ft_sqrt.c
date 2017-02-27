/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 19:50:21 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/16 16:24:06 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 

int		ft_sqrt(int nb)
{
	int i;
	int high;
	int ret;

	i = 0;
	high = nb / 2;
	while (i < high || i < 46341)
	{
		ret = i * i;
		if (ret > nb || nb <= 0)
		{
			return (0);
		}
		if (ret == nb)
			return (i);
		i++;
	}
	return (0);
}

int		main(void)
{
	printf("%d", ft_sqrt(2250000));
}
