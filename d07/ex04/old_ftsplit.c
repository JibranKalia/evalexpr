/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 15:42:25 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/28 18:54:35 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include <stdlib.h>

int		ft_is_space(char c)
{
	if (c == ' ' || c == '\n' || c  == '\t')
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

int		ft_len_word(char *str, int i)
{
	int		count;
	count = 0;

	while (ft_is_space(str[i]) == 0)
	{
		count++;
		i++;
	}

	return (count);
}

int		ft_str_len(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
		i++;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	int		c;
	int		i;
	int		j;
	char	**ptr;
	int		word_size;

	c = 0;
	i = 0;
	j = 0;
	ptr = (char**)malloc(sizeof(char*) * (ft_num_word(str) + 1));
	printf("num of word = %d", ft_num_word(str));
	while (c++ < ft_str_len(str))
	{
		if (ft_is_space(str[c]) == 1)
			c++;
		if (ft_is_space(str[c]) == 0)
		{
			word_size = ft_len_word(str, c);
			ptr[i] = (char*)malloc(sizeof(char) * (word_size + 1));
			while (j < word_size)
				ptr[i][j++] = str[c++];
			ptr[i][j] = '\0';
			i++;
			j = 0;
		}
	}
	return (ptr);
}
