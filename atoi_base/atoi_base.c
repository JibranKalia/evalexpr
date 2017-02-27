/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 12:44:52 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/27 13:08:32 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_

int		ft_atoi_base(const char	*str, int str_base)
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


