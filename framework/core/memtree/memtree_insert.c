/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memtree_insert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:46:42 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/15 16:14:43 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memtree.h"

void	memtree_insert(t_memtree memtree, t_any address)
{
	if (address == memtree->address)
		return ;
	else if (address < memtree->address)
	{
		if (memtree->left_child)
		{
			memtree_insert(memtree->left_child, address);
			memtree_rebalance(memtree);
		}
		else
			memtree->left_child = memtree_create(address);
	}
	else if (address > memtree->address)
	{
		if (memtree->right_child)
		{
			memtree_insert(memtree->right_child, address);
			memtree_rebalance(memtree);
		}
		else
			memtree->right_child = memtree_create(address);
	}
}
