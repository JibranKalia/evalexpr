/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 00:28:37 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/27 01:52:08 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	bin2 (int n)
{
	int i;
	int remainder;
	int binary;

	i = 1;
	binary = 0;
	
	while (n != 0)
	{
		remainder = n % 2;
		n = n / 2;
		binary = binary + (remainder * i);
		i = i*10;
	}

	printf("%d\n", binary);
}

void	bin(unsigned int n)
{
	unsigned int i;
	
	for (i = 1 << 31; i > 0; i = i/2)
		(n & i) ? printf("1") : printf("0");

}
int	main(void) 
{


	unsigned int a = 117;	/* 60 = 0011 1100 */  
	int c = 0;           
	
	bin2(a);
	c = ~a;          /*-61 = 1100 0011 */
	bin(c);
	printf("Line 4 - Value of c is %d\n", c );

   c = a << 2;     /* 240 = 1111 0000 */
   printf("Line 5 - Value of c is %d\n", c );

   c = a >> 2;     /* 15 = 0000 1111 */
   printf("Line 6 - Value of c is %d\n", c );
}
