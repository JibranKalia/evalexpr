/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 11:36:41 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/29 21:20:09 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_list.h"

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*ptr;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	ptr = (char*)malloc(sizeof(*src) * (len + 1));
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
