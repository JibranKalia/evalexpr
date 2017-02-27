/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1node.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 16:07:50 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/24 23:04:02 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
#include <stdio.h>

typedef struct Node
{
	int 	data;
	struct 	Node* next;
} node_t;


node_t *ft_insert(node_t* head, int n)
{
	node_t* temp;
	temp = (node_t*)malloc(sizeof(node_t));
	temp->data = n;
	temp->next = head;
	return (temp);
}

void ft_print(node_t* temp)
{
	printf("List is: ");
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
int main()
{
	node_t* head;
	head = NULL;

	int i = 0;

	int A[5] = {44, 344, -12, 33, 4};

	while (i < 5)
	{
		head = ft_insert(head, A[i]);
		ft_print(head);
		i++;
	}
}
