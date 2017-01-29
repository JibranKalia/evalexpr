/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   postfix.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 23:09:20 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/29 02:04:44 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/p_stack.h"
#include "../includes/ft_list.h"

void	init_stack(p_stack *st)
{
	st->top=-1;	
}

void	infixtopostfix(char *infix, char *postfix, int i, int j)
{
	p_stack st;
	char temp;
	char token;

	init_stack(&st);
	while (infix[i] != '\0')
	{
		token = infix[i];
		if (isalpha(token) == 1)
		{
			postfix[j++] = token;
		}
		else if (token == '(')
			push(&st, '(');
		else if (token == ')')
			while ((temp = pop(&st)) != '(')
			{
				postfix[j++] = temp;
				postfix[j++] = ' ';
			}
		else
		{
			while (precd(token) <= precd(top(&st)) && !empty(&st))
			{
				temp = pop(&st);
				postfix[j++] = temp;
				postfix[j++] = ' ';
			}
			push(&st, token);
		}
		i++;
	}

	while(!empty(&st))
	{
		temp = pop(&st);
		postfix[j++] = temp;
	}
	postfix[j] = '\0';
}


int		ft_infix(char *str, int len)
{
	char	*postfix;
	char	*infix;
	int		i;
	int		j;

	i = 0;
	j = 0;
	postfix = (char*)malloc(sizeof(char) * len);
	infix = (char*)malloc(sizeof(char) * len);
	
	infix = str; 
	
	infixtopostfix(infix, postfix, i, j);
	printf("Answer: %s", postfix);

	return (0);
}

