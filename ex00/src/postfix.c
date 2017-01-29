/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   postfix.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 23:09:20 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/29 15:58:39 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/p_stack.h"
#include "../includes/ft_list.h"

void	infixtopost(char *infix, char *postfix, int i, int len)
{
	p_stack *st;
	char 	temp;
	char 	token;
	int		j;

	j = 0;
	st = init_stack(len);
	if (!st)
		return ;
	while (infix[i] != '\0')
	{
		token = infix[i];
		if (token >= '0' && token <= '9')
			postfix[j++] = token;
		else if (token == '(')
			push(st, '(');
		else if (token == ')')
			while ((temp = pop(st)) != '(')
			{
				postfix[j++] = temp;
				postfix[j++] = ' ';
			}
		else
		{
			while (precd(token) <= precd(top(st)) && !empty(st))
			{
				temp = pop(st);
				postfix[j++] = temp;
				postfix[j++] = ' ';
			}
			push(st, token);
		}
		i++;
	}

	while(!empty(st))
	{
		temp = pop(st);
		postfix[j++] = temp;
	}
	postfix[j] = '\0';
}

char *ft_infix(char *str, int len)
{
	char	*postfix;
	char	*infix;
	int		i;

	i = 0;
	postfix = (char*)malloc(sizeof(char) * len);
	infix = (char*)malloc(sizeof(char) * len);
	infix = str;	
	infixtopost(infix, postfix, i, len);
	free (infix);
	return (postfix);
}
