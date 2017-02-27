/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 16:04:22 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/17 18:24:36 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include <string.h> 

void	ft_putstr(char *str);
int    ft_strncmp(char *s1, char *s2, unsigned int n);

int main (void)
{
	char s1[] = "A";
	char s2[] = "5B";
	int n = 2;


	int		libc_ptr;
	int		ft_ptr;

	ft_ptr = ft_strncmp(s1, s2, n);
	libc_ptr = strncmp(s1, s2, n);

	printf("Libc: %d\nMine: %d", libc_ptr, ft_ptr);
}
