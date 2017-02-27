/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   primefactor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 16:56:29 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/27 17:12:35 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
void ft_positive_number(long nb)
{
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		return ;
	}
	ft_positive_number(nb / 10);
	ft_putchar(nb % 10 + 48);
}

void	ft_putnbr(int nb)
{
	long positiven;

	positiven = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		positiven = -positiven;
	}
	ft_positive_number(positiven);
}
void		prime_factor(int nb)
{
	norig = nb;
	while ((nb % 2) == 0)
	{
		ft_putnbr(2);
		ft_putchar('*');
		nb = nb / 2;		
	}

	int i = 3;
	
	while (i <= norig/2)
	{
		while ((nb % i) == 0)
		{
			ft_putnbr(i);
			ft_putchar('*');
			nb = nb / i;
		}
		i = i + 2;
	}
}


int	main (void)
{
	prime_factor(28343520);
}
