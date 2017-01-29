/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   posteval.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 02:19:48 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/29 04:04:39 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/p_stack.h"
#include "../includes/ft_list.h"

int		math(char str, int n1, int n2)
{
	if (str == '+')
		return(n1 + n2);
	else if (str == '-')
		return(n1 - n2);
	else if (str == '*')
		return(n1 * n2);
	else if (str == '/')
		return(n1 / n2);
	else if (str == '%')
		return(n1 % n2);
	else 
		return (0);
}
	
int		ft_posteval(char *str)
{
	int 	len;
	int		op1;
	int 	op2;
	int		ret;
	int		i;
	char	*pf;
	p_stack	pt;

	i = 0;
	ret = 1;
	len = ft_strlen(str);
	init_stack(&pt);
	pf = (char *)malloc(sizeof(char) * len);
	pf = str;
	while (pf[i] != '\0')
	{
		if (isalpha(pf[i]) == 1)
		{
			push(&pt, ft_atoi(&pf[i]));
		}
		else if (pf[i] == ' ')
			i++;
		else 
		{	
			op2 = pop(&pt);
			op1 = pop(&pt);
			ret = math(pf[i], op1, op2);
			push (&pt, ret);
			printf("ret = %d \n", ret);
		}
		i++;
	}
	ret = pop(&pt);
	free(pf);
	return (ret);
}
