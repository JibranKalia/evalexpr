/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 20:29:49 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/25 20:51:14 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list				*temp;
	unsigned int		i;

	i = 0;
	if (!begin_list)
		return (0);
	temp = begin_list;
	while (i < nbr)
	{
		if (temp->next != '\0')
			temp = temp->next;
		else
			return (0);
		i++;
	}
	return (temp);
}
