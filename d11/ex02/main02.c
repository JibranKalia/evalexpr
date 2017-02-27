/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 17:11:47 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/25 12:05:38 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include "ft_list.h"
void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_push_front(t_list **begin_list, void *data);
void	ft_linkprint(t_list* temp)
{
	while (temp != NULL)
	{
		printf("%s ", temp->data);
		temp = temp->next;
	}	
}

int		main(int argc, char **argv)
{
	t_list* head = NULL;
	int i = 2;
	head = ft_create_elem(argv[1]);

	while (i < argc)
	{
		ft_list_push_back(&head, argv[i]);
		i++;
	}

	ft_list_push_front(&head, "XYZ");

	ft_linkprint(head);

	return (0);
}
