/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 13:14:32 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/19 15:43:06 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h> 

char	*ft_concat_params(int argc, char **argv);

int		main(int argc, char **argv)
{
	char	*range;
	range = ft_concat_params(argc, argv);

	printf("%s", range);
}
