/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memtree_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:33:22 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/15 15:46:19 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memtree.h"

t_memtree	memtree_create(t_any address)
{
	t_memtree	memtree;

	memtree = malloc(sizeof(struct s_memtree));
	if (memtree == NULL)
	{
		memtree_destroy(memtree_get());
		return (NULL);
	}
	memtree->address = address;
	memtree->height = 0;
	memtree->left_child = NULL;
	memtree->right_child = NULL;
	return (memtree);
}