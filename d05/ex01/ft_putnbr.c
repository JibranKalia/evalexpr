/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 15:04:49 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/16 15:44:58 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 

int		ft_putchar(char c);

void	ft_positive_number(long nb)
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
