/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 16:18:17 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/20 17:17:26 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int		i;
	int		div;
	char	temp1;
	char	temp2;

	i = 0;
	div = 0;
	while (str[i] != '\0')
	{
		temp1 = str[i];
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			div = ((temp1 + 42) - 'a') / 26;
			temp2 = str[i] + 42 - (div * 26);
			str[i] = temp2;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			div = ((temp1 + 42) - 'A') / 26;
			temp2 = str[i] + 42 - (div * 26);
			str[i] = temp2;
		}
		i++;
	}
	return (str);
}
