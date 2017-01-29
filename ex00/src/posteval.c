/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   posteval.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 02:19:48 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/29 13:59:23 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/p_stack.h"
#include "../includes/ft_list.h"

int		num_flag;

int		ft_charcmp(char s1, char s2)
{
	if (s1 == s2)
		return (0);
	else
		return (1);
}

void	eval_push(p_stack *st, int elem)
{
	if (num_flag == 1)
	{
		int num;
		num = pop(st);
		st->top = st->top + 1;
		st->data[st->top] = elem + 10 * num;
	}	
	else if (num_flag == 0)
	{
		st->top = st->top + 1;
		st->data[st->top] = elem;
		num_flag = 1;
	}
}
int		math(char c, int n1, int n2)
{
	int res;
	
	res = 0;
	if (c == '+') 
		res = n1 + n2;
	else if (c == '-')
		res = n1 - n2;
	else if (c ==  '*')
		res = n1 * n2;
	else if (c == '/') 
		res = n1 / n2;
	else if (c == '%') 
		res = n1 % n2;
	
	return (res);
}
	
int		ft_posteval(char *str, int len)
{
	int		op1;
	int 	op2;
	int		i;
	char	*pf;
	char	ch;
	p_stack	*pt;

	i = 0;
	pt = init_stack(len);
	pf = (char *)malloc(sizeof(char) * len);
	pf = str;
	while ((ch = pf[i]) != '\0')
	{
		if (ch >= '0' && ch <= '9')	
		{
			eval_push(pt, (ch - '0'));
			printf("int = %d  num_flag=%d\n", (ch -'0'), num_flag);
			num_flag = 1;
		}
		else if (ch == ' ')
		{
			num_flag = 0;
			printf("SPACE num_flag = %d\n", num_flag);
		}
		else
		{	
			printf("Operand: %c  num_flag=%d\n", ch, num_flag);
			num_flag = 0;
			op2 = pop(pt);
			op1 = pop(pt);
			eval_push (pt, math(ch, op1, op2));
			printf("\nret = %d 	  num_flag = %d\n\n", math(ch, op2, op1), num_flag);
		}
		printf("TOP OF STACK = %d\n", print_top(pt));
		i++;
	}
	return (pop(pt));
}
