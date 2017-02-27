/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 16:04:22 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/17 18:29:43 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include <string.h> 

void	ft_putstr(char *str);
int    ft_strcmp(char *s1, char *s2);

int main (void)
{
	char s1[] = "ABBB";
	char s2[] = "ABBD";


	int		libc_ptr;
	int		ft_ptr;

	ft_ptr = ft_strcmp(s1, s2);
	libc_ptr = strcmp(s1, s2);

	printf("Libc: %d\nMine: %d", libc_ptr, ft_ptr);
}
