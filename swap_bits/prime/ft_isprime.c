/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 04:10:42 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/27 05:00:43 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int		ft_isprime(int nb)
{
	int i;

	i = 2;
	if (nb == 1 || nb == 0)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);

	while (i < 9)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	while ((i * i) <= nb)
	{
		if ((nb % i) == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}

int		ft_next_prime(int nb)
{
	while (nb)
	{
		if (ft_isprime(nb) == 0)
			nb++;
		else if (ft_isprime(nb) == 1)
			return (nb);
	}
	return (0);
}

int		main (void)
{
	int i = 558815073;
	int ret = ft_next_prime(i);

	printf("%d \n", ret);	
	return (0);
}
