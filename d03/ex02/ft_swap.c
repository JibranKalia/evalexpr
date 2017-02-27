/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 11:52:17 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/13 09:33:53 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

void	ft_swap(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

int		main(void)
{
	int number1;
	number1 = 5;

	int number2;
	number2 = 10;

	printf("number1: %d \n", number1);
	printf("number2: %d \n", number2);

	ft_swap(&number1, &number2);

	
	printf("number1 after swap: %d \n", number1);
	printf("number2 after swap: %d \n", number2);

}



