/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 05:01:00 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/27 11:56:59 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_printhex(int n)
{
	int	answer;
	int	quotient;
	char holder[10];
	int	i;

	i = 0;
	quotient = n;
	while (quotient != 0)
	{
		answer = quotient % 16;
		if (answer < 10)
			holder[i] = answer + '0';
		else
			holder[i] = answer - 10 + 'a';
		quotient = quotient / 16;
		i++;
	}
	i--;

	while (i > -1)
	{
		ft_putchar(holder[i]);
		i--;
	}

}
int main(void)
{
	ft_printhex(5156454);
	ft_putchar('\n');
}
