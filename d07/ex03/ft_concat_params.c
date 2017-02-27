/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 22:36:16 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/19 17:17:52 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strarray(int n, char **c)
{
	int i;
	int j;
	int result;

	i = 0;
	j = 0;
	result = n;
	while (i < n)
	{
		while (c[i][j] != '\0')
		{
			result++;
			j++;
		}
		j = 0;
		i++;
	}
	return (result);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		c;
	int		j;
	char	*ptr;

	i = -1;
	c = 0;
	j = 0;
	ptr = (char*)malloc(sizeof(**argv) * (ft_strarray(argc, argv)));
	while (++i < argc)
	{
		while (argv[i][j] != '\0')
		{
			ptr[c] = argv[i][j];
			j++;
			c++;
		}
		if (i != (argc - 1))
			ptr[c] = '\n';
		else
			ptr[c] = '\0';
		c++;
		j = 0;
	}
	return (ptr);
}
