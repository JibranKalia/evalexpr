/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_stack.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 00:29:23 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/29 03:47:51 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_STACK_H
# define P_STACK_H

# include <unistd.h> 
# include <stdlib.h> 
# include <stdio.h> // DONT FORGET TO REMOVE 

# define BUFF 50 

typedef struct	stack
{
	int	data[BUFF];
	int	top;
}				p_stack;

int     precd(char);
int     full(p_stack *);
void    init_stack(p_stack *);
void    push(p_stack *, int);
int     pop(p_stack *);
int		isalpha(char c);
int     top(p_stack *);
int		empty(p_stack *);
void    infix_to_postfix(char infux[], char postfix[]);
#endif
