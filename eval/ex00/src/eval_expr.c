/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 19:16:13 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/29 21:14:33 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_list.h"

int		eval_expr(char *str)
{
	int		len;
	int		ret;
	char	*array;

	array = ft_strdup(str);
	array = ft_addspace(str, ft_total_str_len(array), 0);
	len = ft_total_str_len(array) * 2;
	array = ft_infix(array, len);
	ret = ft_posteval(array, len, 0);
	return (ret);
}
