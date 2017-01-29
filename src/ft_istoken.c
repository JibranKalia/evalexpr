/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istoken.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 17:18:19 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/29 02:06:34 by jkalia           ###   ########.fr       */
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

char	*ft_addspace(char *str, int len, int j)
{
	char	*input_str;

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
	input_str[j] = '\0';
	return (input_str);
}

int		precd(char x)
{
	if (x == '(')
		return (0);
	if (x == '+' || x == '-')
		return (1);
	if (x == '*' || x == '/' || x == '%')
		return (2);
	return (3);
}

int		isalpha(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
