/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_cmp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 13:08:45 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/27 16:56:18 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 

int		ft_diff(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if( c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else 
		return (c - 'A' + 10);
}


int		ft_base_cmp(char c, int base)
{
	int i = 0;
	char *s1 = "0123456789abcdef";
	char *s2 = "0123456789ABCDEF";

	while (i < base)
	{
		if ((c == *(s1 + i)) || ((c = *(s2 + i))))
			return (1);
		i++;
	}
	return (0);
}

int		atoi_base(const char *str, int str_base)
{
	int 	i;
	int		neg_flag;
	long	answer;

	answer = 0;
	i = 0;

	while (*str == ' ' || *str == '\t' || *str == '\n'|| *str == '\f' || *str == '\v' || *str == '\r')
        str++;
    neg_flag = (*str == '-') ? -1 : 1;
    str = (*str == '+' || *str == '-') ? str + 1 : str;
    while (*str && (ft_base_cmp(*str, str_base) == 1))
    {
        answer = answer * str_base + ft_diff(*str);
        str++;
    }
	
	return (answer * neg_flag);
}


int		main(void)
{
	char s1[] = "3a3d0";
	
	printf("%d", atoi_base(s1, 14));
}
