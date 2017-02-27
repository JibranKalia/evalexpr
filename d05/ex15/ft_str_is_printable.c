/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 22:22:31 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/17 22:28:31 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
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
		if (str[i] >= ' ' && str[i] <= '~')
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
