/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 09:27:38 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/13 09:40:44 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)


{
	write(1, &c, 1);
	return (0);
}

char	*ft_strrev(char *str)
{
	int len;
	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	len = len - 1;

	char revstr;

	int i;
	i = 0;

	while (i < len)
	{
		revstr = str[len];
		str[len] = str[i];
		str[i] = revstr;

		len--;
		i++;
	}


	int a;
	a = 0;
	while (str[a] != 0)
	{
		ft_putchar(str[a]);
		a++;
	}

	return (str);

}

int	main(void)
{
	char c[10] = "abcdefg";

	ft_strrev(c);

	return (0);
}
