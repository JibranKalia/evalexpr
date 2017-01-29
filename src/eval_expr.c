/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 20:53:03 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/29 02:06:30 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_list.h"
#include <stdio.h> 

int		eval_expr(char *str)
{
	int	len;
	char* array;
	
	len = ft_total_str_len(str);
	array = ft_addspace(str, len, 0);

	ft_infix(array, (len * 2));
	printf("\n Original: %s\n", array);

	return (0);


}
