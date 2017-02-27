/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhramut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 12:25:06 by akhramut          #+#    #+#             */
/*   Updated: 2017/01/31 23:52:04 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void		print_rush(int rush_n, int x, int y, int flag)
{
	if (flag == 1)
		write(1, " || ", 4);
	write(1, "[rush-0", 7);
	ft_putnbr(rush_n);
	write(1, "] [", 3);
	ft_putnbr(x);
	write(1, "] [", 3);
	ft_putnbr(y);
	write(1, "]", 1);
}

int			check_if_rush(char *str, int x, int y)
{
	int		flag;

	flag = 0;
	if (check_rush00(str, x, y))
		print_rush(0, x, y, flag);
	flag |= check_rush00(str, x, y);
	if (check_rush01(str, x, y))
		print_rush(1, x, y, flag);
	flag |= check_rush01(str, x, y);
	if (check_rush02(str, x, y))
		print_rush(2, x, y, flag);
	flag |= check_rush02(str, x, y);
	if (check_rush03(str, x, y))
		print_rush(3, x, y, flag);
	flag |= check_rush03(str, x, y);
	if (check_rush04(str, x, y))
		print_rush(4, x, y, flag);
	flag |= check_rush04(str, x, y);
	return (!flag);
}

int			define_xy(char *str)
{
	int		x;
	int		y;
	int		i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		++i;
	x = i;
	y = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			++y;
		++i;
	}
	if (y == 0 || x == 0)
		return (1);
	else
		return (check_if_rush(str, x, y));
}

char		*create_line(char *line, char *add)
{
	char	*tmp;
	int		i;
	int		ln;

	ln = ft_strlen(line) + ft_strlen(add);
	tmp = (char*)malloc(sizeof(*tmp) * (ln + 1));
	if (tmp)
	{
		i = 0;
		while (line[i] != '\0')
		{
			tmp[i] = line[i];
			++i;
		}
		while (*add != '\0')
		{
			tmp[i] = *add++;
			++i;
		}
		tmp[i] = '\0';
	}
	free(line);
	return (tmp);
}

int			main(void)
{
	char	*str;
	char	buf[BUF_SIZE + 1];
	int		size;

	str = (char*)malloc(sizeof(*str));
	*str = '\0';
	while ((size = read(0, buf, BUF_SIZE)))
	{
		buf[size] = '\0';
		str = create_line(str, buf);
	}
	if (*str == '\0' || define_xy(str))
		write(1, "aucune", 6);
	ft_putchar('\n');
	return (0);
}
