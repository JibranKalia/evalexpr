/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 22:01:55 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/17 22:07:20 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;
	int len;

	i = 0;
	len = 0;
	if (str[0] == '\0')
		return (1);
	while (str[len] != '\0')
		len++;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == len - 1)
				return (1);
		}
		else
			return (0);
		i++;
	}
	return (0);
}
