/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 20:46:02 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/28 20:52:04 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_list.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

void	ft_putstr(char *str)
{
	int	d;

	d = 0;
	while (str[d] != '\0')
	{
		ft_putchar(str[d]);
		d++;
	}
}
