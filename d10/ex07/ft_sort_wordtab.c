/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 21:09:13 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/24 23:01:01 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2);

int		ft_len(char **tab)
{
	int len;

	len = 0;
	while (tab[len])
		len++;
	return (len);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		n;
	int		k;
	int		len;
	char	*temp;

	i = 0;
	n = 1;
	k = 0;
	len = ft_len(tab);
	while (i++ < len)
	{
		while ((n + 1) < len)
		{
			k = ft_strcmp(tab[n], tab[n + 1]);
			if (k > 0)
			{
				temp = tab[n];
				tab[n] = tab[n + 1];
				tab[n + 1] = temp;
			}
			n++;
		}
		n = 0;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
		if (s1[i] == '\0')
			return (0);
	}
	return (s1[i] - s2[i]);
}
