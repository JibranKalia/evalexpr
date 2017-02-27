/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 11:07:54 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/12 11:46:11 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}


int		main(void)
{
	int a;
	int *ptr;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;

	ptr = &a;
	ptr2 = &ptr;
	ptr3 = &ptr2;	
	ptr4 = &ptr3;	
	ptr5 = &ptr4;	
	ptr6 = &ptr5;	
	ptr7 = &ptr6;	
	ptr8 = &ptr7;	
	ptr9 = &ptr8;	
	
	ft_ultimate_ft(ptr9);

	printf("%d", a);
	return (0);

}
