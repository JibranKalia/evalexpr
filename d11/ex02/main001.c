/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 18:40:42 by bmontoya          #+#    #+#             */
/*   Updated: 2017/01/25 11:40:08 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data);
void		ft_list_push_back(t_list **begin_list, void *data);

int			main(void)
{
	int a = 1;
	int b = 3;
	int c = 77;
	int d = 77;
	int e = 77;
	t_list *test;

	test = ft_create_elem(&a);
	ft_list_push_back(&test, &b);
	ft_list_push_back(&test, &c);
	ft_list_push_back(&test, &d);
	ft_list_push_back(&test, &e);
	while (test->next)
	{
		printf("%d,", *((int*)test->data));
		test = test->next;
	}
	printf("%d", *((int*)test->data));
	return (0);
}
