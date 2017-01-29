/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_stack.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 00:29:23 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/29 15:58:02 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_STACK_H
# define P_STACK_H

# include <unistd.h> 
# include <stdlib.h> 

typedef struct	stack
{
	int			*data;
	int			capacity;
	int			top;
}				p_stack;

int     precd(char);
int     full(p_stack *);
p_stack *init_stack(int len);
void    push(p_stack *, int);
int     pop(p_stack *);
int		isalpha(char c);
int     top(p_stack *);
int		empty(p_stack *);
void    infix_to_postfix(char infux[], char postfix[]);
int		print_top(p_stack *);
#endif
