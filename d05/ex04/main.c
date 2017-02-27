/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 16:04:22 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/17 20:19:14 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include <string.h> 

char	*ft_strncpy(char	*dest, char	*src, unsigned int n);

int main (void)
{
	//char strorig[] ;
	char strft[6]; 
	char strc[6];


	unsigned int i;
	i = 1;

	ft_strncpy(strft, "abc", sizeof(strft));
	strncpy(strc, "abc", sizeof(strc));

	printf("Original: %s\n    Mine: %s", strc, strft);
	//printf("Mine: %s", strft);
}
