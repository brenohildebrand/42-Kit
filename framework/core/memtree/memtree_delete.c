/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memtree_delete.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:15:13 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/15 16:48:58 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memtree.h"

void	memtree_delete(t_memtree memtree, t_any address)
{
	t_memtree	left_child;

	if (address == memtree->address)
	{
		if (memtree->right_child)
		{
			memtree->address = memtree_delete_min(memtree);
		}
		else
		{
			left_child = memtree->left_child;
			memtree->address = left_child->address;
			memtree->right_child = left_child->right_child;
			memtree->left_child = left_child->left_child;
			free(left_child);
		}
	}
	else
	{
		if (address < memtree->address)
			memtree_delete(memtree->left_child, address);			
		else
			memtree_delete(memtree->right_child, address);
	}
	memtree_rebalance(memtree);
}
