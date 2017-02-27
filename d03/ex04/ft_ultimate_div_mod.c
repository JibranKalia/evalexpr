/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 13:40:16 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/12 13:46:31 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b) 
{
	int n;
	int d;

	n = *a; 
	d = *b;

	*a = n / d;
	*b = n % d;	

}

int		main(void)
{
	int a;
	int b;

	a = 39;
	b = 5;
	

	printf("This is a before function: %d \n", a);
	printf("This is b before function: %d \n", b);

	ft_ultimate_div_mod(&a, &b);

	printf("This is a after function: %d \n", a);
	printf("This is b after function: %d \n", b);
}

