/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 09:13:26 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/17 10:42:10 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		k;

	k = 0;
	while (str[k] != '\0')
		k++;
	return (k);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	int				j;
	int				string_length;
	int				search_length;

	i = 0;
	string_length = ft_strlen(str);
	search_length = ft_strlen(to_find);
	if (string_length < search_length)
		return (0);
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (j == search_length - 1)
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
