/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 13:59:57 by jle-quel          #+#    #+#             */
/*   Updated: 2017/01/25 22:53:31 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_putnbr(int n)
{
	printf("%d", n);
}

int		main(void)
{
	int		tab[3] = { 1, 2, 3 };

	ft_foreach(tab, 3, ft_putnbr);
	return (0);
}
