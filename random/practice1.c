/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practice1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 10:57:40 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/19 18:14:02 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int		*return_me(int* n);

int		main()
{
	int	x = 10;
	int *p = &x;

	printf("p: %p\n", p);
	p = return_me(p);
	printf("p: %p\n", p);

	return 0;
}

int *return_me(int *pint)
{
	return pint;
}
