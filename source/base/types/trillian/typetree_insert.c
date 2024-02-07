/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:35:24 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 11:29:27 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typetree.h"

static void	helper(t_typetree *typetree, t_typedata typedata, t_any address)
{
	if (*typetree == NULL)
	{
		*typetree = typetree_create(typedata, address);
	}
	else if (address == (*typetree)->address)
	{
		return ;
	}
	else
	{
		if (address < (*typetree)->address)
		{
			helper(&((*typetree)->ltree), typedata, address);
		}
		else
		{
			helper(&((*typetree)->rtree), typedata, address);
		}
		typetree_rebalance(typetree);
	}
}

void	typetree_insert(t_typedata typedata, t_any address)
{
	t_typetree	*typetree;

	typetree = typetree_get();
	helper(typetree, typedata, address);
}
