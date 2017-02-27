/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 09:58:15 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/14 10:15:22 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include <math.h> 

int		ft_iterative_power(int	nb, int	power)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power < 0)
		return (0);
	else 
	{
		int		ret;
		int		i;
		i = 0;
		ret = 1;

		while (i < power)
		{
			ret = ret * nb;
			i++;
		}

		return (ret);
	}

}
int		main (void)
{

	printf("My Answer: %d Correct Answer: %f\n", ft_iterative_power(2,5), pow(2,5));
	
	printf("My Answer: %d Correct Answer: %f\n", ft_iterative_power(0,2), pow(0,2));

	printf("My Answer: %d Correct Answer: %f\n", ft_iterative_power(3,54), pow(3,54));
	printf("My Answer: %d Correct Answer: %f\n", ft_iterative_power(114,3), pow(114,3));
	printf("My Answer: %d Correct Answer: %f\n", ft_iterative_power(-1,5), pow(-1,5));
	printf("My Answer: %d Correct Answer: %f\n", ft_iterative_power(1,4), pow(1,4));
	printf("My Answer: %d Correct Answer: %f\n", ft_iterative_power(7,377), pow(7,377));
	printf("My Answer: %d Correct Answer: %f\n", ft_iterative_power(8,16), pow(8,16));
}
