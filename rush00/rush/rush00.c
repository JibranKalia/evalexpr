/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 14:12:22 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/15 19:59:14 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);


void	rush(int x, int y)
{
	int		i;
	int		j;

	i = 0;
	j = 0;

	if (x <= 0 || y <= 0)
		return;

	while (j < y)
	{
		while (i < x)
		{
            if (j == 0 || j == y - 1)
            {
                if (i == 0 || i == x - 1 )
                    ft_putchar('o');
                
                else
                    ft_putchar('-');
            }
            
            else
            {
                if (i == 0 || i == x - 1 )
                    ft_putchar('|');
                
                else
                    ft_putchar(' ');
            }
			i++;
		}
		j++
	}
}


