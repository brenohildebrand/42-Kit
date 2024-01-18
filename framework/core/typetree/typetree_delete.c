/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_delete.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:25:43 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/18 10:46:03 by bhildebr         ###   ########.fr       */
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
	if (aux == typetree->ltree)
		aux->parent->ltree = aux->ltree;
	else
		aux->parent->rtree = aux->ltree;
	aux->parent->height -= 1;
	free(aux->address);
	free(aux);
	aux = typetree->ltree;
	while (aux->rtree != NULL)
	{
		typetree_rebalance(typetree);
		aux = aux->rtree;
	}
}

static void	remove_one_children_node(t_typetree typetree, t_any address)
{
	if (typetree->ltree != NULL)
	{
		if (typetree->parent)
		{
			if (typetree->address < typetree->parent->address)
				typetree->parent->ltree = typetree->ltree;
			else
				typetree->parent->rtree = typetree->ltree;
		}
	}
	else
	{
		if (typetree->parent)
		{
			if (typetree->address < typetree->parent->address)
				typetree->parent->ltree = typetree->rtree;
			else
				typetree->parent->rtree = typetree->rtree;
		}
	}
	typetree->parent->height -= 1;
	typetree_rebalance(typetree->parent);
	free(typetree->address);
	free(typetree);
}

static void	another_helper(t_typetree typetree, t_any address)
{
	if (typetree->ltree == NULL && typetree->rtree == NULL)
	{
		if (typetree->parent)
		{
			if (typetree->address < typetree->parent->address)
				typetree->parent->ltree = NULL;
			else
				typetree->parent->rtree = NULL;	
		}
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