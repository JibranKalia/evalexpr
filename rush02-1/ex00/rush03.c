/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhramut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 20:20:49 by akhramut          #+#    #+#             */
/*   Updated: 2017/01/29 20:24:40 by akhramut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		condition_rush03(int i, int j, int x, int y)
{
	char	c;

	if (j == x)
		c = '\n';
	else if (i == 0 && j == 0)
		c = 'A';
	else if (i == 0 && j == x - 1)
		c = 'C';
	else if (i == y - 1 && j == 0)
		c = 'A';
	else if (i == y - 1 && j == x - 1)
		c = 'C';
	else if (i == 0 || i == y - 1)
		c = 'B';
	else if (j == 0 || j == x - 1)
		c = 'B';
	else
		c = ' ';
	return (c);
}

int			check_rush03(char *str, int x, int y)
{
	int		j;
	int		i;
	char	c;

	i = 0;
	while (i < y)
	{
		j = -1;
		while (++j <= x)
		{
			c = condition_rush03(i, j, x, y);
			if (str[j + i * (x + 1)] != c)
				return (0);
		}
		i++;
	}
	return (1);
}
