/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhramut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 19:14:18 by akhramut          #+#    #+#             */
/*   Updated: 2017/01/29 20:08:46 by akhramut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			condition_rush01(int i, int j, int x, int y)
{
	char	c;

	if (j == x)
		c = '\n';
	else if (i == 0 && j == 0)
		c = '/';
	else if (i == 0 && j == x - 1)
		c = '\\';
	else if (i == y - 1 && j == 0)
		c = '\\';
	else if (i == y - 1 && j == x - 1)
		c = '/';
	else if (i == 0 || i == y - 1)
		c = '*';
	else if (j == 0 || j == x - 1)
		c = '*';
	else
		c = ' ';
	return (c);
}

int			check_rush01(char *str, int x, int y)
{
	int		i;
	int		j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j <= x)
		{
			if (!(str[j + i * (x + 1)] == condition_rush01(i, j, x, y)))
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}
