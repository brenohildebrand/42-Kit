/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:34:02 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/24 11:08:00 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typetree.h"

t_typetree	typetree_create(t_typedata typedata, t_any address)
{
	t_typetree	typetree;

	typetree = malloc(sizeof(struct s_typetree));
	if (typetree == NULL)
	{
		typetree_destroy();
		return (NULL);
	}
	typetree->height = 1;
	typetree->ltree = NULL;
	typetree->rtree = NULL;
	typetree->address = address;
	typetree->typedata = typedata;
	return (typetree);
}
