/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 20:35:22 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/16 16:25:48 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int		ft_is_prime(int nb)
{
	int i;

	i = 3;

	if (nb == 2 || nb == 3)
		return (1);
	while ((i * i) <= nb)
	{
		if ((nb % i) == 0)
			return (0);
		else 	
			return (1);
		i = i + 2;
	}
	return (0);
}


int		main(void)
{
	printf("%d", ft_is_prime(121));
}
