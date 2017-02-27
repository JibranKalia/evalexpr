/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 18:17:44 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/25 12:30:02 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *temp;

	temp = *begin_list;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = (ft_create_elem(data));
	}
	else
		temp->next = (ft_create_elem(data));
}
