/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:35:24 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/17 16:25:04 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typetree.h"

static void	helper(t_typetree typetree, t_any address)
{
	if (address < typetree->address)
	{
		if (typetree->ltree == NULL)
		{
			typetree->ltree = typetree_create(typetree, address);
		}
		else
		{
			helper(typetree->ltree, address);			
			typetree_rebalance(typetree);
		}
	}
	else if (address > typetree->address)
	{
		if (typetree->rtree == NULL)
		{
			typetree->rtree = typetree_create(typetree, address);
		}
		else
		{
			helper(typetree->rtree, address);
			typetree_rebalance(typetree);
		}
	}
}

void	typetree_insert(t_any address)
{
	t_typetree	*typetree;

	typetree = typetree_get();
	if (typetree == NULL)
	{
		*typetree = typetree_create(NULL, address);
		return ;
	}
	helper(*typetree, address);
}
