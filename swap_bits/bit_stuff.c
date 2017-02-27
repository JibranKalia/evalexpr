/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bittest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 03:43:35 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/27 17:12:49 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include <stdio.h> 

int	ft_putchar (char c)
{
	write (1, &c, 1);
	return (0);
}

void	bit_print (unsigned char octet)
{
	unsigned char i;
	i = 1 << 7;

	while (i > 0)
	{
		(i & octet) ? ft_putchar('1') : ft_putchar('0');
		i = i / 2;
	}
}

unsigned char swap_bit(unsigned char octet)
{
	unsigned char a;
	unsigned char b;

	a = octet << 4;
	b = octet >> 4;

	return (a + b);
}

unsigned char reverse_bit (unsigned char octet)
{
	unsigned result;
	result = octet;

	while (octet)
	{
		result = result << 1;
		result = result | (octet & 1);
		octet = octet >> 1;
	}

	result = result << 1;
	return (result);
}

int		main (void)
{
	int i = 65;

	unsigned char octet = (unsigned char) i;

	bit_print(octet);
	printf("\n");

	bit_print(swap_bit(octet));
	printf("\n");

	bit_print(reverse_bit(octet));
	printf("\n");


	return (0);
}
