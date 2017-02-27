/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 20:31:09 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/28 22:40:11 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_num_word(char *str)
{
	char	*s;
	int		i;
	int		flag;
	int		ret;

	i = 0;
	flag = 0;
	ret = 0;
	s = str;
	while (*s)
	{
		if (*s == ' ')
			flag = 1;
		if (*s != ' ' && flag == 1)
		{
			flag = 0;
			ret++;
		}
		s++;
	}
	ret++;
	return (ret);
}

char	*first_word(char *str, int *index)
{
	char	*ptr;
	int		start;
	int		end;
	int		i;

	start = *index;
	i = start;
	while (str[i] != ' ')
	{
		if (str[i] != '\0')
			i++;
		else
			break ;
	}
	end = i;
	while (str[i] == ' ')
		i++;
	*index = i;
	i = -1;
	ptr = (char*)malloc(sizeof(char) * ((end - start) + 1));
	while (++i < (end - start))
		ptr[i] = str[start + i];
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split_whitespaces(char *str)
{
	char	**ptr;
	int		word_num;
	int		i;
	int		index;

	i = 0;
	index = 0;
	word_num = ft_num_word(str);
	ptr = (char**)malloc(sizeof(char*) * (word_num + 1));
	while (str[0] == ' ')
		str++;
	while (str[i] != '\0')
	{
		ptr[index] = first_word(str, &i);
		index++;
	}
	ptr[index] = 0;
	return (ptr);
}
