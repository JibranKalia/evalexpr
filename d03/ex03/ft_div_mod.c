/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 12:09:01 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/12 12:20:59 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod) 
{
	*div = a/b;
	*mod = a%b;
}


int		main(void)
{
	int div;
	int mod;

	ft_div_mod(38, 7, &div, &mod);

	printf("Division: %d \n", div);
	printf("Remainder: %d ", mod);
}

