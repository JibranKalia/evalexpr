/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 15:42:25 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/28 20:27:50 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include <stdlib.h> 

int		ft_strlen(char *str)
{
    int		len;

    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return (len);
}

int		ft_is_space(char c)
{
    if (c == ' ')
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
		if (*s == ' ')
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
	int 	c;
	int		i = 0;
	int		j = 0;
	char	**ptr;
	int		word_num;
	int		word_size;

	c = 0;

	word_num = ft_num_word(str);
	printf("word_num = %d\n", word_num);
    ptr =(char**)malloc(sizeof(char*) * (word_num + 1));

	while (c < ft_str_len(str) && str[c] != '\0')
	{
		if (ft_is_space(str[c]) == 1)
			c++;	

		else if (ft_is_space(str[c]) == 0)
		{
			word_size = ft_len_word(str, c);
			printf("wordsize = %d\n", word_size );

			ptr[i] = (char*)malloc(sizeof(char) * (word_size + 1));
			j = 0;
			while (j < word_size && str[c] != '\0')
			{
				ptr[i][j] = str[c];
				c++;
				j++;
			}
			ptr[i][j] = '\0';
			j = 0;
			i = i + 1;
				printf("c = %d, i = %d, j = %d\n", c, i , j);
		}
		c++;
	}
	ptr[word_num] = 0;
	return (ptr);
}
