/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 09:13:22 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/13 09:17:33 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

int		ft_putchar(char c)


{
	write(1, &c, 1);
	return (0);
}

int		ft_strlen(char *str)
{
	int len; 
	len = 0;

	while (str[len] != '\0')
	{
		len++;
        len = len + 1;
	}

	ft_putchar(len + '0');
	
	return len;	
}

int	main(void)
{
	char c[10] = "reight";
	
	ft_strlen(c);
		
	return (0);	
}
