/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   code.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 14:16:52 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/24 15:48:27 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct node
{
	int 	data;
	struct	node* link;
}



int		main(void)
{
	node* A;

	A = NULL;

	node *temp;
	temp = (node*)malloc(sizeof(node));

	(*temp).data = 2;
	(*temp).link = NULL;

	A = temp;


}
