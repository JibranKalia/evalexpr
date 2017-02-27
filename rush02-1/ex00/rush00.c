/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhramut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 15:01:41 by akhramut          #+#    #+#             */
/*   Updated: 2017/01/29 20:14:18 by akhramut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			condition_rush00(int i, int j, int x, int y)
{
	char	c;

	if (j == x)
		c = '\n';
	else if ((i == 0 && j == 0) || (i == 0 && j == x - 1))
		c = 'o';
	else if ((i == y - 1 && j == 0) || (i == y - 1 && j == x - 1))
		c = 'o';
	else if (i == 0 || i == y - 1)
		c = '-';
	else if (j == 0 || j == x - 1)
		c = '|';
	else
		c = ' ';
	return (c);
}

int			check_rush00(char *str, int x, int y)
{
	int		i;
	int		j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j <= x)
		{
			if (!(str[j + i * (x + 1)] == condition_rush00(i, j, x, y)))
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}
