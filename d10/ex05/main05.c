/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 16:14:04 by lyoung            #+#    #+#             */
/*   Updated: 2017/01/24 13:05:35 by jkalia           ###   ########.fr       */
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
	int tab1[5] = { 1, 2, 3, 4, 5 };
	int tab2[5] = { 4, 1, 3, 4, 5 };
	int tab3[5] = { 5, 4, 3, 2, 1 };
	int tab4[2] = { 1, 1 };
	int tab5[1] = { 1 };
	int tab6[5] = { 1, 2, 3, 5, 4 };
	int tab7[5] = { 1, 2, 5, 5, 4 };
	int tab8[5] = { 1, 2, 4, 5, 5 };

	printf("%d Expected: 1\n", ft_is_sort(tab1, 5, &check_sort)); //This should be 1
	printf("%d Expected: 0\n", ft_is_sort(tab2, 5, &check_sort)); //This should be 0
	printf("%d Expected: Depends\n", ft_is_sort(tab3, 5, &check_sort)); //Depends whether you are testing for reverse sort
	printf("%d Expected: 1\n", ft_is_sort(tab4, 2, &check_sort)); //This should be 1
	printf("%d Expected: 1\n", ft_is_sort(tab5, 1, &check_sort)); //This should be 1
	printf("%d Expected: 0\n", ft_is_sort(tab6, 5, &check_sort)); //This should be 0
	printf("%d Expected: 0\n", ft_is_sort(tab7, 5, &check_sort)); //This should be 0
	printf("%d Expected: 1\n", ft_is_sort(tab8, 5, &check_sort)); //This should be 1
	return (0);
}
