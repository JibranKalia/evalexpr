/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 15:43:18 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/28 21:22:47 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <stdlib.h> 

char **ft_split_whitespaces(char *str);

int		main(void)
{
	char s1[] = "23 * 3 - ( 1 + 5 ) - 55 + 2";
	printf("%s \n", s1);
	char **answer;

	answer = ft_split_whitespaces(s1);
	for (int i = 0; i < 13; i++)
		printf("%s, ", answer[i]);
	//ft_putstrarr(answer, 5);

	free(answer);	

}
