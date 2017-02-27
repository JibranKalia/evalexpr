/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmedvets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 16:53:22 by gmedvets          #+#    #+#             */
/*   Updated: 2017/01/15 18:48:12 by gmedvets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_toprow(int col, int x)
{
	if (col == 0)
	{
		ft_putchar('A');
	}
	else if (col == x - 1)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	ft_middlerow(int col, int x)
{
	if (col == 0 || col == x - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	ft_bottomrow(int col, int x)
{
	if (col == 0)
	{
		ft_putchar('A');
	}
	else if (col == x - 1)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	rush (int x, int y)
{
	int row;
	int col;

	row = 0;
	col = 0;
	if (x <= 0 || y <= 0)
	{
		return;
	}
	while (row < y)
	{
		while (col < x)
		{
			if (row == 0)
			{
				ft_toprow(col, x);
			}
			else if (row != 0 && row == y - 1)
			{
				ft_bottomrow(col, x);
			}
			else ft_middlerow(col, x);
			{
				col++;
			}
		}
		col = 0;
		row++;
		ft_putchar('\n');
	}
}
