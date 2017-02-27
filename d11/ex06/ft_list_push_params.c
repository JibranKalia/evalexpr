/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 13:21:37 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/25 18:42:36 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*begin_list;
	t_list	*temp;
	int		i;

	i = 2;
	begin_list = ft_create_elem(av[1]);
	while (i < ac)
	{
		temp = ft_create_elem(av[i]);
		temp->next = begin_list;
		begin_list = temp;
		i++;
	}
	return (begin_list);
}
