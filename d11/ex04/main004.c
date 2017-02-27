/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 18:40:42 by bmontoya          #+#    #+#             */
/*   Updated: 2017/01/25 13:01:10 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data);
void		ft_list_push_back(t_list **begin_list, void *data);
t_list		*ft_list_last(t_list *begin_list);

int			main(void)
{
	int c = 1;
	int a = 2;
	t_list *test;
	t_list *test2;

	test = ft_create_elem(&c);
	ft_list_push_back(&test, &a);
	test2 = ft_list_last(test);
	printf("%d\n", *((int*)test->data));
	printf("%d\n", *((int*)test2->data));
	return (0);
}
