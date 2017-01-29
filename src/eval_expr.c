/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 20:53:03 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/28 21:29:37 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_list.h"
#include <stdio.h> 

int		eval_expr(char *str)
{
	int	i; 

	i = 0;
	char** array;
	array = ft_split_whitespaces(str);
	
	while (array[i] != '\0')	
	{
		printf("%s, ", array[i]);
		i++;
	}
	return (0);


}
