/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmontoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 18:40:42 by bmontoya          #+#    #+#             */
/*   Updated: 2017/01/24 22:13:22 by bmontoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data);
void		ft_list_push_back(t_list **begin_list, void *data);
int			ft_list_size(t_list *begin_list);

int			main(void)
{
	int c = 1;
	int a = 2;
	t_list *test;

	test = ft_create_elem(&c);
	ft_list_push_back(&test, &a);
	printf("%d", ft_list_size(test));
	return (0);
}
