/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 16:05:21 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/27 16:28:54 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

int		ft_putchar (char c)
{
	write(1, &c, 1);
	return (0);
}
void	print_bits(unsigned char octet)
{
	int	 i; 
	i = 1 << 7;

	while (i > 0)
	{
		(octet & i) ? ft_putchar('1') : ft_putchar('0');
		i = i / 2;
	}
}

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char result;
	result = octet;

	while (octet)
	{
		result <<= 1;
		result |= (octet & 1);
		octet >>= 1;
		
	}
	result <<= 1;

	return (result);
}


int	main(void)
{
	int i = 32;

	unsigned char o = (unsigned char) i; 

	print_bits(o);
	ft_putchar('\n');
	
	print_bits(reverse_bits(o));
	ft_putchar('\n');
	

}
