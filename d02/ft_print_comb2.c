/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 18:47:40 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/12 17:30:51 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	if ((a != 57) || (b != 56) || (c != 57) || (d != 57))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_whileloops(char a, char b, char c, char d)
{
	while (a <= 57)
	{
		while (b <= 57)
		{
			while (c <= 57)
			{
				while (d <= 57)
				{
					if ((a <= c) && (b < d))
					{
						ft_print(a, b, c, d);
					}
					d++;
				}
				d = 48;
				c++;
			}
			c = 48;
			b++;
		}
		b = 48;
		a++;
	}
}

void	ft_printcomb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = 48;
	b = 48;
	c = 48;
	d = 48;
	ft_whileloops(a, b, c, d);
}

int	main(void)
{
	ft_printcomb2();
	return (0);
}
