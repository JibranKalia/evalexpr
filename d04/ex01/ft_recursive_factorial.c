/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 15:17:44 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/14 09:46:26 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int		ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0) 
		return (1);
	if (nb > 12 || nb < 0 )
		return (0);
	else
	{
		printf("%d \n", nb);
		return (nb * ft_recursive_factorial(nb - 1)); 

		//printf("%d \n", nb);
	}
}

int		main(void)
{
	int		i;

	i = ft_recursive_factorial(5);

	printf("%d", i);
	return (0);
}
