/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 23:32:04 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/25 23:40:24 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list_ptr;
	t_list	*temp;

	list_ptr = begin_list;
	if (!list_ptr)
		return ;
	while (list_ptr)
	{
		if ((*cmp)(list_ptr->data, data_ref) == 0)
		{
			temp = list_ptr->next;
			free(list_ptr);
			list_ptr->next = temp;
		}
		list_ptr = list_ptr->next;
	}
}
