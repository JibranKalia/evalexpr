/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   postfix.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 23:09:20 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/31 15:55:42 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/t_stack.h"
#include "../includes/ft_list.h"

void	infix3(char token, char *postfix, int *index, t_stack *st)
{
	int		j;
	char	temp;

	j = *index;
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
	*index = j;
}

void	infixtopost(char *infix, char *postfix, int i, int len)
{
	t_stack *st;
	char	temp;
	int		j;

	j = 0;
	st = init_stack(len);
	if (!st)
		return ;
	while (infix[i] != '\0')
	{
		infix3(infix[i], postfix, &j, st);
		i++;
	}
	while (!empty(st))
	{
		temp = pop(st);
		postfix[j++] = temp;
	}
	postfix[j] = '\0';
}

char	*ft_infix(char *str, int len)
{
	char	*postfix;
	int		i;

	i = 0;
	postfix = (char*)malloc(sizeof(char) * len);
	infixtopost(str, postfix, i, len);
	free(str);
	return (postfix);
}
