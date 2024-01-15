/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memtree_destroy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:42:36 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/15 15:45:27 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memtree.h"

void	memtree_destroy(t_memtree memtree)
{
	if (memtree != NULL)
	{
		memtree_destroy(memtree->left_child);
		memtree_destroy(memtree->right_child);
		free(memtree);
	}
}