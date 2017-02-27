/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 23:35:04 by enunes            #+#    #+#             */
/*   Updated: 2017/01/24 00:09:43 by enunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		check_sort(int a, int b)
{
	return (a - b);
}

int		main(void)
{
	int res;
	int tab[5] = {1, 2, 3, 4, 5 };
	int tab1[5] = { 5, 4, 3, 2, 1 };
	int	tab2[5] = {5, 4, 6, 2, 1};

	res = ft_is_sort(tab, 5, &check_sort);
	printf("Ascending:\nExpected = 1\nResult = %d\n\n", res);
	
	res = ft_is_sort(tab1, 5, &check_sort);
	printf("Descending:\nExpected = 1\nResult = %d\n\n", res);
	
	res = ft_is_sort(tab2, 5, &check_sort);
	printf("Not sorted:\nExpected = 0\nResult = %d\n\n", res);
	return (0);
}
