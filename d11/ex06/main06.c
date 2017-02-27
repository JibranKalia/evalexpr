/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 20:07:45 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/25 20:29:51 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av);
void	ft_list_clear(t_list **being_list);

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

	ft_list_clear(&head);
	ft_linkprint(head);
	printf("\n");

	return (0);
}
