/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 16:04:22 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/17 22:49:41 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include <string.h> 

char	*ft_strncat(char	*dest, char	*src, int nb);

int main (void)
{
	char strorig[] = "1addjkfjdkjf";
	char strft[10] = "bcd"; 
	char strc[10] = "bcd" ;

	int n = 4;

	ft_strncat(strft, strorig, n);
	strncat(strc, strorig, n);

	printf("Original: %s\n    Mine: %s", strc, strft);
	//printf("Original: %s\n", strc);
}
