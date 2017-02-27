/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_space.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 20:06:09 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/19 22:25:55 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_is_space(char c)
{
    if (c == ' ' || c == '\n' || c  == '\f' || c  == '\t' || c  == '\v')
        return (1);
    else
        return (0);
}

int		ft_num_word(char *s)
{
	int		i = 0;
	int		flag = 0;
	int		ret = 0;

	while (s[i] != '\0')
	{
		if (ft_is_space(s[i]) == 1)
			flag = 0;
		if (ft_is_space(s[i]) == 0 && flag == 0)
		{
			flag = 1;
			ret++;
		}
		i++;
	}
	return (ret);
}

int		main(void)
{
	char s1[30] = " \n\n. \t...  I am Jibran    kd  ";
	printf("%d", ft_num_word(s1));
}
