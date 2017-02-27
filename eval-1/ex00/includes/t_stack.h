/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 19:05:05 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/29 19:14:54 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_STACK_H
# define T_STACK_H

# include <unistd.h>
# include <stdlib.h>

typedef struct	s_stack
{
	int		*data;
	int		capacity;
	int		top;
}				t_stack;

int				precd(char x);
int				full(t_stack *st);
void			push(t_stack *st, int nb);
int				pop(t_stack *st);
int				isalpha(char c);
int				top(t_stack *st);
int				empty(t_stack *st);
void			infix_to_postfix(char infux[], char postfix[]);
int				print_top(t_stack *st);
t_stack			*init_stack(int len);
#endif
