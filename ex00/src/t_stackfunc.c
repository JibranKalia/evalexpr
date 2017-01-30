/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stackfunc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 00:23:15 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/29 19:14:30 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/t_stack.h"

void	push(t_stack *st, int n)
{
	st->top = st->top + 1;
	st->data[st->top] = n;
}

t_stack *init_stack(int capacity)
{
    t_stack* st = (t_stack*)malloc(sizeof(t_stack));

    if (!st)
        return NULL;
    st->top = -1;
    st->capacity = capacity;
    st->data = (int*)malloc(sizeof(int) * capacity + 1);

    if (!st->data)
        return NULL;
    return (st);
}

int	 pop(t_stack *st)
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

int	 top(t_stack *st)
{
	return (st->data[st->top]);
}

int	 empty(t_stack *st)
{
	if(st->top == -1)
		return (1);
	return (0);
}
