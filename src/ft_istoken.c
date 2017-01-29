/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istoken.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 17:18:19 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/28 21:50:23 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_list.h"

int		ft_total_str_len(char *str)
{
	int ret;
	int	len;

	ret = 0;
	len = ft_strlen(str);
	while (*str)
	{
		if (*str == ')' || *str == '(')
			ret++;
		str++;
	}
	return (ret + len);
}

char	*ft_addspace(char *str, int len)
{
	char	*input_str;
	int		j;

	j = 0;
	input_str = (char *)malloc(sizeof(char) * len);
	while (*str)
	{
		if (*str == '(')
		{
			input_str[j] = '(';
			input_str[j + 1] = ' ';
			j++;
		}
		else if (*str == ')')
		{
			input_str[j] = ' ';
			input_str[j + 1] = ')';
			j++;
		}
		else
			input_str[j] = *str;
		str++;
		j++;
	}
	return (input_str);
}
