/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 14:56:47 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/15 11:50:05 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_put_head()
{
	ft_putchar('o');
}

void	ft_put_middle()
{
	ft_putchar('-');
}

void	ft_put_space()
{
	ft_putchar(' ');
}
void 	ft_put_side()
{
	ft_putchar('|');
}

void	ft_first_row(int width)
{
	int middle;
	middle = width - 2;

	if (width < 0)
		return;
	if (width == 1)
		ft_put_head();
	if (width == 2)
	{
		ft_put_head();
		ft_put_head();
	}

	if (width > 2)
	{
		ft_put_head();
		while (middle-- > 0)
			ft_put_middle();
		ft_put_head();
	}
}

void	ft_middle_row(int width)
{
	int middle;
	middle = width - 2;

	if (width < 0)
	if (width == 1)
		ft_put_side();
	if (width == 2)
	{
		ft_put_side();
		ft_put_side();
	}

	else
	{
		ft_put_side();
		while (middle-- > 0)
			ft_put_space();
		ft_put_side();
	}
}

void	rush(int x, int y)
{
	int middlerow;
	middlerow = y - 2;
	
	if (y < 0)
		return; 
	if (y == 1)
		ft_first_row(x);
		return;
	if (y == 2)
	{
		ft_first_row(x);
		ft_putchar('\n');
		ft_first_row(x);
	}

	else
	 {
		ft_first_row(x);
		ft_putchar('\n');
	 	while (middlerow-- > 0)
		{
			ft_middle_row(x);
			if (middlerow != 0)
				ft_putchar('\n');
		}
		ft_putchar('\n');
		ft_first_row(x);
	 }
}
