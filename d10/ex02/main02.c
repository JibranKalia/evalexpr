/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 12:01:50 by lyoung            #+#    #+#             */
/*   Updated: 2017/01/23 18:16:39 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_increment(int n)
{
	return (n + 1);
}
int		*ft_map(int *tab, int length, int (*f)(int));

int		main(void)
{
	int i;
	int length;
	int *res;
	int tab[6] = { 12, 90, 56, 118, 34, 7 };

	i = 0;
	length = 6;
	res = ft_map(tab, length, &ft_increment);

	printf("Your Answer: ");
	while (i < length)
	{
		printf("%d, ", res[i]);
		i++;
	}
	
	printf("\n   Expected: 13, 91, 57, 119, 35, 8 \n");

	return (0);
}
