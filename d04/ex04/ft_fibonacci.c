/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 11:24:14 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/14 12:12:44 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>


int		ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index < 0)
		return (-1);
	else if (index == 1)
		return (1);
	else
		return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));

}

int main(void)
{
	printf("Answer for 11: %d \n", ft_fibonacci(11));
	printf("Answer for 20: %d \n", ft_fibonacci(20));
	printf("Answer for 0: %d \n", ft_fibonacci(0));
	printf("Answer for 1: %d \n", ft_fibonacci(1));

	printf("Answer for 17: %d \n", ft_fibonacci(17));
	printf("Answer for 2: %d \n", ft_fibonacci(2));
	printf("Answer for 3: %d \n", ft_fibonacci(3));

	printf("Answer for 26: %d \n", ft_fibonacci(26));
	printf("Answer for -3: %d \n", ft_fibonacci(-3));
	printf("Answer for -44: %d \n", ft_fibonacci(-55));
	return (0);
}
