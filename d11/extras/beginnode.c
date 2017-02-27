/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   beginnode.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 15:48:46 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/24 16:29:16 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h> 
#include<stdio.h> 

struct Node
{
	int	data;
	struct Node* next; 

};

struct Node* head;

void	Insert(int x)
{
	struct Node* temp = malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = head;
	head = temp;
}

void	Print()
{
	struct Node* temp;
	temp = head;

	printf("List is: ");
	while (temp != NULL)
	{
		printf(" %d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int		main()
{
	head = NULL;	
	int i;

	int	x[5] = {44, 344, -12, 33, 4};

	for (i = 0; i < 5; i++)
	{
		printf("Enter the number \n");
		Insert(x[i]);
		Print();
	}

}
