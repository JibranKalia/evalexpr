/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhramut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 09:28:32 by akhramut          #+#    #+#             */
/*   Updated: 2017/01/16 21:04:11 by akhramut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_putchar(char c);

int			ft_iterative_power(int nb, int power)
{
	int r;

	r = 1;
	if (power < 0 || nb == 0)
		return (0);
	if (power == 0 && nb > 0)
		return (1);
	if (power == 0 && nb < 0)
		return (-1);
	while (power > 0)
	{
		r = r * nb;
		--power;
	}
	return (r);
}

void		ft_other_int(int nb)
{
	char	c;
	int		i;
	int		temp;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	i = 0;
	temp = nb;
	while (temp / 10 > 0)
	{
		++i;
		temp = temp / 10;
	}
	while (i >= 0)
	{
		c = '0' + nb / ft_iterative_power(10, i) % 10;
		ft_putchar(c);
		--i;
	}
}

void		ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putchar('1');
		ft_putchar('4');
		ft_putchar('7');
		ft_putchar('4');
		ft_putchar('8');
		ft_putchar('3');
		ft_putchar('6');
		ft_putchar('4');
		ft_putchar('8');
	}
	else
		ft_other_int(nb);
}
