/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 12:02:30 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/20 13:42:50 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

void	ft_takes_place(int hour);

int		main(void)
{
	printf("0: "); ft_takes_place(0);
	printf("\n");
	printf("5: "); ft_takes_place(5);
	printf("\n");
	printf("8: "); ft_takes_place(8);
	printf("\n");
	printf("11: "); ft_takes_place(11);
	printf("\n");
	printf("12: "); ft_takes_place(12);
	printf("\n");
	printf("13: "); ft_takes_place(13);
	printf("\n");
	printf("15: "); ft_takes_place(15);
	printf("\n");
	printf("23: "); ft_takes_place(23);
	printf("\n");
	printf("24: "); ft_takes_place(24);
	printf("\n");
}
