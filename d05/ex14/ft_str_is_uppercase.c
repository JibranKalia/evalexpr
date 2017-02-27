/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 22:08:09 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/17 22:20:55 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
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
		if (str[i] >= 'A' && str[i] <= 'Z')
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
