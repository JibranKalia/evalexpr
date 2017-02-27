/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 10:23:34 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/15 16:22:14 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_toprow(int col, int x)
{
	if (col == 0)
		ft_putchar('/');
	else if (col == x - 1)
		ft_putchar('\\');
	else
		ft_putchar('*');
}

void	ft_middlerow(int col, int x)
{
	if (col == 0 || col == x - 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	ft_bottomrow(int col, int x)
{
	if (col == 0)
	{
		ft_putchar('\\');
	}
	else if (col == x - 1)
		ft_putchar('/');
	else
		ft_putchar('*');
}

void	rush(int x, int y)
{
	int row;
	int col;

	row = 0;
	col = 0;
	if (x <= 0 || y <= 0)
		return ();
	while (row < y)
	{
		while (col < x)
		{
			if (row == 0)
				ft_toprow(col, x);
			else if (row != 0 && row == y - 1)
				ft_bottomrow(col, x);
			else
				ft_middlerow(col, x);
			col++;
		}
		col = 0;
		row++;
		ft_putchar('\n');
	}
}
