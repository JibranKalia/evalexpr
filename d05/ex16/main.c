/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 16:04:22 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/17 23:05:37 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include <string.h> 

char	*ft_strcat(char	*dest, char	*src);

int main (void)
{
	char test[256] = "a";
	char strft[10] = "zxcv"; 
	char strc[10] = "zxcv";

	ft_strcat(test, strft);
	strcat(test, strc);

	printf("Original: %s\n    Mine: %s", strc, strft);
	//printf("Original: %s\n", strc);
}
