/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 15:04:49 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/12 20:38:59 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

int		ft_putchar(char c)


{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	int d; 
	d = 0;

	while (str[d] != '\0')
	{
		ft_putchar(str[d]);
		d++;
	}	
}

int	main(void)
{
	char c[10] = "reight";
	
	ft_putstr(c);
		
	return (0);	
}
