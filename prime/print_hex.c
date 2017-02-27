/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 05:01:00 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/27 11:49:18 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printhex(int nb)
{
	int i; 
	int quotient;
	int	temp;
	char answer[100];

	i = 1;
	quotient = nb;

	while (quotient != 0)
	{
		temp = quotient % 16;

		if (temp < 10)
			temp = temp + '0';
		else
			temp = temp - 10 + 'a';

		answer[i++] = temp;
		quotient = quotient / 16;
	}

	i--;
	while (i > 0)
	{
		ft_putchar(answer[i]);
		i--;
	}
}

int main(void)
{
	ft_printhex(5156454);
	ft_putchar('\n');
}
