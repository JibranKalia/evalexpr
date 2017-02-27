/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 11:34:53 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/15 11:48:15 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print(int x, char letter1, char letter2, char letter3)
{
	if (x > 0)
	{
		ft_putchar(letter1);
		x--;
	}

	while (x > 1)
	{
		ft_putchar(letter2);
		x--;
	}

	if (x == 1)
	{
		ft_putchar(letter3);
		x--;
	}
}

void	rush(int x, int y)
{
	if (y > 0)
	{
		ft_print(x, 'A', 'B', 'A');
		ft_putchar('\n');
		y--;
	}

	while (y > 1)
	{	
		ft_print(x, 'B', ' ', 'B');
		ft_putchar('\n');
		y--;
	}

	if (y == 1)
	{
		ft_print(x, 'C', 'B', 'C');
		ft_putchar('\n');
		y--;
	}
}	
