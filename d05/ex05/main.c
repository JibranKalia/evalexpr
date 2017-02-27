/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 16:04:22 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/17 10:42:26 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include <string.h> 

void	ft_putstr(char *str);
char    *ft_strstr(char *str, char *to_find);

int main (void)
{
	char largestring[] = "FOO XYZ ABC EFG HIJKL";
	char ft_smallstring[] = "FOO BAR AZX";
	char libc_smallstring[] = "FOO BAR AZX";

	char *libc_ptr;
	char *ft_ptr;


	ft_ptr = ft_strstr(largestring, ft_smallstring);
	libc_ptr = strstr(largestring, libc_smallstring);

	printf("Libc: %s\nMine: %s", libc_ptr, ft_ptr);
}
