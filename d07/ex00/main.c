/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 11:36:52 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/19 12:44:22 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h> 
#include <string.h> 
#include <stdio.h> 

char	*ft_strdup(char *src);

int		main(void)
{
	char orig[] = "Thi sdfkdkf ajdkfjakjfk; sdiow9024ajf adjfklaj dskfjaksjdfklj asd is a random string";
	char *libptr;
	char *ft_ptr;
	
	libptr = strdup(orig);
	ft_ptr = ft_strdup(orig);

	printf("Libc: %s\nMine: %s\n", libptr, ft_ptr);

	return (0);
}
