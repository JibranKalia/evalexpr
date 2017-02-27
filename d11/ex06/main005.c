/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 18:40:42 by bmontoya          #+#    #+#             */
/*   Updated: 2017/01/25 00:42:54 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av);

int			main(int argc, char** argv)
{
	t_list *test;

	if(!(test = ft_list_push_params(argc, argv)))
		return (0);
	while (test->next)
	{
		printf("%s\n", (char*)test->data);
		test = test->next;
	}
	printf("%s\n", (char*)test->data);
	return (0);
}
