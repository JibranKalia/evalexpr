/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 19:16:13 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/29 19:16:16 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_list.h"

int		eval_expr(char *str)
{
	int	len;
	int	ret;
	char* array;
	char* orig;

	len = ft_total_str_len(str);
	array = ft_addspace(str, len, 0);

	len = ft_total_str_len(array) * 2;
	orig = ft_infix(array, len);
	ret = ft_posteval(orig, len);
	return (ret);
}
