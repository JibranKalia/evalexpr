/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 10:41:57 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/13 11:25:05 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int		ret;
	int		i;

	ret = 1;
	i = 1;
	if (nb > 1 && nb < 13)
	{
		while (i <= nb)
		{
			ret = ret * i;
			i++;
		}
		printf("nb: %d ret: %d\n", nb, ret);

		return (ret);
	}
	if (nb == 1 || nb == 0)
		return (1);
	else
		return (0);
}

int		main(void)
{
	ft_iterative_factorial(0);
	ft_iterative_factorial(1);
	ft_iterative_factorial(2);
	ft_iterative_factorial(3);
	ft_iterative_factorial(-13);
	ft_iterative_factorial(5);
	ft_iterative_factorial(10);
	ft_iterative_factorial(12);
	ft_iterative_factorial(-5);
	ft_iterative_factorial(-2);
}
