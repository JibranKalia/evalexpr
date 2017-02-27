/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 17:11:47 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/24 19:04:01 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include "ft_list.h"
void	ft_list_push_back(t_list **begin_list, void *data);

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
	int i = 1;

	while (i < argc)
	{
		head = ft_create_elem(argv[i]);
		i++;
	}

	ft_list_push_back(&head, "BCE");
	ft_linkprint(head);

	return (0);
}
