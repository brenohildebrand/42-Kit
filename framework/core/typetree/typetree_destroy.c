/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_destroy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:56:09 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/18 23:07:53 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typetree.h"

static void	helper(t_typetree typetree)
{
	if (typetree == NULL)
		return ;
	helper(typetree->ltree);
	helper(typetree->rtree);
	free(typetree->address);
	free(typetree);
}

void	typetree_destroy(void)
{
	t_typetree	*typetree;

	typetree = typetree_get();
	helper(*typetree);
}
