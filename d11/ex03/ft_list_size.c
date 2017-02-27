/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 12:18:30 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/25 12:40:00 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *being_list)
{
	t_list	*temp;
	int		len;

	len = 0;
	temp = being_list;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
