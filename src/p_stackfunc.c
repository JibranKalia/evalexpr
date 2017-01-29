/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_stackfunc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 00:23:15 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/29 13:50:33 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/p_stack.h"

void	push(p_stack *st, int n)
{
	st->top = st->top + 1;
	st->data[st->top] = n;
}

p_stack *init_stack(int capacity)
{
    p_stack* st = (p_stack*)malloc(sizeof(p_stack));

    if (!st)
        return NULL;
    st->top = -1;
    st->capacity = capacity;
    st->data = (int*)malloc(sizeof(int) * capacity + 1);

    if (!st->data)
        return NULL;
    return (st);
}

int	 pop(p_stack *st)
{
	int n;
	if (!empty(st))
	{
		n = st->data[st->top];
		st->top = st->top - 1;
		return (n);
	}
	else
		return ('$');
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

int		print_top(p_stack *st)
{
	return (st->data[st->top]);
}
