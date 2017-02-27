/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 11:34:35 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/26 14:40:20 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree *btree_create_node(void *item);

void	*btree_insert(btree **root, void *item)
{
	if (*root == 0)
	{
		root = btree_create_node(item);
		return ;
	}
	else if (data <= root->data)
	{
		root->left = btree_insert(root->left, data);
	}
	else
		root->right = btree_insert(root->right, data);
}

int		b_tree_search(btree *root,  )
int		main(void)
{
	
}
