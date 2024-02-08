/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_rebalance.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:30:07 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/07 21:17:34 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trillian.h"

static void	left_rotate(t_trillian *trillian)
{
	t_trillian	y;
	t_trillian	x;
	t_trillian	b;

	y = *trillian;
	x = y->rtree;
	b = x->ltree;
	y->rtree = b;
	x->ltree = y;
	*trillian = x;
	trillian_update_height((*trillian)->ltree);
	trillian_update_height(*trillian);
}

static void	right_rotate(t_trillian *trillian)
{
	t_trillian	y;
	t_trillian	x;
	t_trillian	b;

	y = *trillian;
	x = y->ltree;
	b = x->rtree;
	y->ltree = b;
	x->rtree = y;
	*trillian = x;
	trillian_update_height((*trillian)->rtree);
	trillian_update_height(*trillian);
}

static void	rebalance_left(t_trillian *trillian)
{
	int	lgrandheight;
	int	rgrandheight;

	lgrandheight = trillian_get_height((*trillian)->ltree->ltree);
	rgrandheight = trillian_get_height((*trillian)->ltree->rtree);
	if (lgrandheight >= rgrandheight)
	{
		right_rotate(trillian);
	}
	else
	{
		left_rotate(&((*trillian)->ltree));
		right_rotate(trillian);
	}
}

static void	rebalance_right(t_trillian *trillian)
{
	int	lgrandheight;
	int	rgrandheight;

	lgrandheight = trillian_get_height((*trillian)->rtree->ltree);
	rgrandheight = trillian_get_height((*trillian)->rtree->rtree);
	if (rgrandheight >= lgrandheight)
	{
		left_rotate(trillian);
	}
	else
	{
		right_rotate(&((*trillian)->rtree));
		left_rotate(trillian);
	}
}

void	trillian_rebalance(t_trillian *trillian)
{
	int	lheight;
	int	rheight;

	if ((*trillian) == NULL)
		return ;
	lheight = trillian_get_height((*trillian)->ltree);
	rheight = trillian_get_height((*trillian)->rtree);
	if (lheight - rheight > 1)
		rebalance_left(trillian);
	else if (rheight - lheight > 1)
		rebalance_right(trillian);
	trillian_update_height(*trillian);
}
