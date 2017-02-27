/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 20:10:20 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/25 20:29:03 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*temp;

	temp = *begin_list;
	while (*begin_list)
	{
		temp = temp->next;
		free(*begin_list);
		*begin_list = temp;
	}
	*begin_list = NULL;
}
