/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhramut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 19:33:16 by akhramut          #+#    #+#             */
/*   Updated: 2017/01/29 20:17:35 by akhramut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			condition_rush02(int i, int j, int x, int y)
{
	char	c;

	if (j == x)
		c = '\n';
	else if (i == 0 && j == 0)
		c = 'A';
	else if (i == 0 && j == x - 1)
		c = 'A';
	else if (i == y - 1 && j == 0)
		c = 'C';
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

int			check_rush02(char *str, int x, int y)
{
	int		i;
	int		j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j <= x)
		{
			if (!(str[j + i * (x + 1)] == condition_rush02(i, j, x, y)))
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}
