/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 17:07:14 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/28 17:00:14 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *temp;

	temp = (t_list*)malloc(sizeof(t_list));
	if (temp)
	{
		temp->data = data;
		temp->next = NULL;
	}
	return (temp);
}
