/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 15:01:06 by jkalia            #+#    #+#             */
/*   Updated: 2017/02/02 16:35:43 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	a;
	unsigned char	b;

	a = octet;
	b = octet;

	a = a << 4;
	b = b >> 4;

	return (a + b);

}

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	a;
	unsigned char 	b;
	unsigned char 	a1;
	unsigned char	a2;
	unsigned char	aa1;
	unsigned char	aa2;
	unsigned char	aa3;
	unsigned char	aa4;
	unsigned char 	b1;
	unsigned char 	b2;
	unsigned char 	bb1;
	unsigned char 	bb2;
	unsigned char 	bb3;
	unsigned char 	bb4;
	a = octet << 4;
	b = octet >> 4;

	a1 = a << 2;
	a2 = a >> 2;

	b1 = b << 2;
	b2 = b >> 2;

	aa1 = a1 << 1;
	aa2 = a1 >> 1;
	aa3 = a2 << 1;
	aa4 = a2 >> 1;

	bb1 = b1 << 1;
	bb2 = b1 >> 1;
	bb3 = b2 << 1;
	bb4 = b2 >> 1;	

	return (aa1 + aa2 + aa3 + aa4 + bb1 + bb2 + bb3 + bb4);
}

void	bit_print(unsigned char octet)
{
	int	i;
	i = 1 << 7;

	while (i > 0)
	{
		(i & octet) ?  ft_putchar('1') : ft_putchar('0');
		i = i / 2;
	}
	ft_putchar('\n');
}

int		main(void)
{
	int i;
	i = 65;
	
	unsigned char octet = (unsigned char) i;
	bit_print(octet);
	//bit_print(swap_bits(octet));

	bit_print(reverse_bits(octet));

	return (0);
}
