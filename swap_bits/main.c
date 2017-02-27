/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 01:57:57 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/27 03:43:16 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h> 

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

unsigned char reverse_bits(unsigned char octet)
{
	unsigned int result;
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


void	print_bits(unsigned char octet)
{
	unsigned char i;
	i = 1 << 7;

	while (i > 0)
	{
		(i & octet) ? ft_putchar('1') : ft_putchar('0');
		i = i/2;
	}
}

int	main(void)
{
	int i = 65;
	unsigned char octet = (unsigned char) i;

	unsigned char ret = reverse_bits(octet);

	print_bits(octet);
	printf("\n");
	print_bits(ret);
	printf("\n");


}
