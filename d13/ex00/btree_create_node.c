/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 11:32:30 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/26 11:39:29 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree *btree_create_node(void *item)
{
	t_btree	*node;
	node = (t_btree*)malloc(sizeof(node));
	t_btree->item = item;
	t_btree->right = 0;
	t_btree->left = 0;

	return (node);
}
