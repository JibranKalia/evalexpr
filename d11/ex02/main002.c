/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 18:40:42 by bmontoya          #+#    #+#             */
/*   Updated: 2017/01/25 12:14:02 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data);
void		ft_list_push_front(t_list **begin_list, void *data);

int			main(void)
{
	int c = 1;
	int a = 2;
	t_list *test;

	test = ft_create_elem(&c);
	ft_list_push_front(&test, &a);
	while (test->next)
	{
		printf("%d,", *((int*)test->data));
		test = test->next;
	}
	printf("%d", *((int*)test->data));
	return (0);
}
