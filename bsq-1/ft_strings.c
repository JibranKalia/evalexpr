/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 23:43:43 by bmontoya          #+#    #+#             */
/*   Updated: 2017/01/28 21:59:59 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int sloc;

	sloc = 0;
	while (str[sloc] != '\0')
		sloc++;
	return (sloc);
}

int			mod_strlen(char *str)
{
	int i;
	int length;

	length = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] == ')' || str[i] == '(')
			length++;
		length++;
	}
	return (length);
}

char		*str_replace(char *str, int *length, int *w)
{
	char	*newstr;
	int		ip;
	int		i;

	ip = 0;
	i = -1;
	*length = mod_strlen(str);
	if (!(newstr = (char*)malloc(sizeof(*newstr) * (*length + 1))))
		return (0);
	i = -1;
	while (str[++i])
	{
		if (str[i] == '(')
			newstr[ip++] = str[i];
		if (str[i] == '(' || str[i] == ')' || str[i] == ' ')
		{
			newstr[ip++] = '\0';
			*w = *w + 1;
		}
		if (str[i] != '(' && str[i] != ' ')
			newstr[ip++] = str[i];
	}
	newstr[ip] = '\0';
	return (newstr);
}

char		**str_split(char *str)
{
	char	**strs;
	int		i;
	int		maxwords;
	int		words;
	int		len;

	maxwords = 0;
	len = 0;
	i = 0;
	str = str_replace(str, &len, &maxwords);
	if (!(strs = (char**)malloc(sizeof(*strs) * (maxwords + 1))))
		return (0);
	words = 0;
	strs[words++] = str;
	while (i < len)
	{
		if (!str[i])
			strs[words++] = str + i + 1;
		i++;
	}
	strs[words] = 0;
	return (strs);
}
