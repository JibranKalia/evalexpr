/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 14:58:35 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/25 21:36:30 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av);
t_list	*ft_list_at(t_list *begin_head, unsigned int nbr);

void	ft_linkprint(t_list* temp)
{
	while (temp != NULL)
	{
		printf("%s, ", temp->data);
		temp = temp->next;
	}	
}

int		main(int argc, char **argv)
{
	t_list* head = NULL;

	head = ft_list_push_params(argc, argv);

	ft_linkprint(head);
	printf("\n");

	ft_linkprint(ft_list_at(head, 2));
	printf("\n");

	return (0);
}
