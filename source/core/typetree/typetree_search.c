/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_search.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:31:41 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 11:30:47 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typetree.h"

static t_typedata	helper(t_typetree typetree, t_any address)
{
	if (typetree->address == address)
		return (typetree->typedata);
	else if (address < typetree->address)
		return (helper(typetree->ltree, address));
	else if (address > typetree->address)
		return (helper(typetree->rtree, address));
	return (NULL);
}

t_typedata	typetree_search(t_any address)
{
	t_typetree	*typetree;

	typetree = typetree_get();
	return (helper(*typetree, address));
}