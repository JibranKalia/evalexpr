/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_stackfunc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 00:23:15 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/29 04:00:25 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/p_stack.h"

int	 full(p_stack *st)
{
	if (st->top == BUFF - 1)
		return (1);
	return (0);
}

void	push(p_stack *st, int n)
{
	st->top = st->top + 1;
	st->data[st->top] = n;
}

int	 pop(p_stack *st)
{
	int n;

	n = st->data[st->top];
	st->top = st->top - 1;
	return (n);
}

int	 top(p_stack *st)
{
	return (st->data[st->top]);
}

int	 empty(p_stack *st)
{
	if(st->top == -1)
		return (1);
	return (0);
}
