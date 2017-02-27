/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 11:21:26 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/17 18:24:45 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int		diff;
	unsigned int		i;
	int		j;

	diff = 0;
	i = 0;
	j = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (i < n)
		{
			if (s1[i] != '\0')
				diff = diff + s1[i];
			if (s2[i] != '\0')
				diff = diff - s2[i];
			if (diff != 0)
				break ;
		}
		i++;
	}
	return (diff);
}
