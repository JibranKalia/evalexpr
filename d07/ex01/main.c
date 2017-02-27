/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 11:36:52 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/19 12:41:42 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h> 
#include <string.h> 
#include <stdio.h> 

int		*ft_range(int min, int max);

int		main(void)
{
	int		*ft_ptr;
	int		len;
	int 	min = -15;
	int 	max = 15;
	len = 0;

	ft_ptr = ft_range(min , max);

	for (int i = 0; i < (max - min); i++)
		printf("%d, ", ft_ptr[i]);
	
	return (0);
}
