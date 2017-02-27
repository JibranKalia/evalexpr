/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 17:11:47 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/24 19:42:54 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include "ft_list.h"

t_list	*ft_create_elem(void *data);
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
		ft_linkprint(head);
		i++;
	}
	return (0);
}
