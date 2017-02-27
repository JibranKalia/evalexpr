/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 16:04:22 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/17 16:16:51 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include <string.h> 

char	*ft_strcpy(char	*dest, char	*src);
void	ft_putstr(char *str);

int main (void)
{
	char strorig1[] = "Hello";
	char strorig2[] = "Hello";
	char strft[10];
	char strc[10]; 

	int i;
	i = 0;

	ft_strcpy(strft, strorig1);
	strcpy(strc, strorig2);

	printf("Original: %s\n    Mine: %s", strc, strft);
	//printf("Original: %s\n", strc);
}
