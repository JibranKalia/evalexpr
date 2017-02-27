/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 21:20:13 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/24 22:27:51 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error(int n)
{
	if (n == 0)
		ft_putstr("Stop : division by zero\n");
	if (n == 1)
		ft_putstr("Stop : modulo by zero\n");
}

int		ft_doop(int n1, int n2, char *operator)
{
	int res;

	res = 0;
	if (ft_strcmp(operator, "+") == 0)
		res = n1 + n2;
	else if (ft_strcmp(operator, "-") == 0)
		res = n1 - n2;
	else if (ft_strcmp(operator, "*") == 0)
		res = n1 * n2;
	else if (ft_strcmp(operator, "/") == 0)
		res = n1 / n2;
	else if (ft_strcmp(operator, "%") == 0)
		res = n1 % n2;
	return (res);
}

int		main(int argc, char **argv)
{
	int n1;
	int n2;
	int res;

	res = 0;
	if (argc != 4)
		return (0);
	n1 = ft_atoi(argv[1]);
	n2 = ft_atoi(argv[3]);
	if (ft_strcmp(&argv[2][0], "/") == 0 && n2 == 0)
	{
		ft_error(0);
		return (0);
	}
	if (ft_strcmp(&argv[2][0], "%") == 0 && n2 == 0)
	{
		ft_error(1);
		return (0);
	}
	res = ft_doop(n1, n2, &argv[2][0]);
	if (argv[2][1] != '\0')
		res = 0;
	ft_putnbr(res);
	ft_putchar('\n');
	return (0);
}
