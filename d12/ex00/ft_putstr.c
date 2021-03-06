/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 15:04:49 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/26 12:18:19 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"

int		ft_putstr(char *str)
{
	int		d;

	d = 0;
	while (str[d] != '\0')
	{
		ft_putchar(str[d]);
		d++;
	}
	return (0);
}
