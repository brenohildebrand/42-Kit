/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_delete.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:25:43 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/17 20:32:18 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typetree.h"

static void	remove_two_children_node(t_typetree typetree, t_any address)
{
	t_typetree aux;
	
	aux = typetree->ltree;
	while (aux->rtree != NULL)
		aux = aux->rtree;
	typetree->address = aux->address;
	aux->address = address;
	typetree_delete(typetree->ltree, address);
}

static void	remove_one_children_node(t_typetree typetree, t_any address)
{
	t_typetree	aux;

	if (typetree->ltree != NULL)
		aux = typetree->ltree;
	else
		aux = typetree->rtree;
	free(typetree->address);
	free(typetree);
	// return aux
}

static void	another_helper(t_typetree typetree, t_any address)
{
	if (typetree->ltree == NULL && typetree->rtree == NULL)
	{
		free(typetree->address)
		free(typetree);
	}
	else if (typetree->ltree != NULL && typetree->rtree != NULL)
	{
		remove_two_children_node(typetree, address);
	}
	else
	{
		remove_one_children_node(typetree, address);	
	}
}

static void	helper(t_typetree typetree, t_any address)
{
	if (typetree == NULL)
	{
		return ;
	}
	else if (typetree->address == address)
	{
		another_helper(typetree, address);
	}
	else if (address < typetree->address)
	{
		helper(typetree->ltree, address);
	}
	else if (address > typetree->address)
	{
		helper(typetree->rtree, address);
	}
	if (typetree->ltree->height > typetree->rtree->height)
		typetree->height = 1 + typetree->ltree->height;
	else
		typetree->height = 1 + typetree->rtree->height; 
	typetree_rebalance(typetree);
}

void	typetree_delete(t_any address)
{
	t_typetree	*typetree;
	t_typetree	max_min;

	typetree = typetree_get();
	if (typetree == NULL)
		return ;
	helper(*typetree, address);
}