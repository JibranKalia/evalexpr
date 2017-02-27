/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 11:19:08 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/31 22:15:37 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char	*str)
{
	int i;
	int neg_flag;
	long	answer;

	answer = 0;
	neg_flag = 0;
	i = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'|| *str == '\f' || *str == '\v' || *str == '\r')
		str++;
	neg_flag = (*str == '-') ? -1 : 1;
	str = (*str == '+' || *str == '-') ? str + 1 : str;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		answer = answer * 10 + (*str - '0');
		str++;
	}

	return (answer * neg_flag);
}


