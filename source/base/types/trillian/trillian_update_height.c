/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_update_height.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:22:15 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/07 21:17:40 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trillian.h"

void	trillian_update_height(t_trillian trillian)
{
	int	lheight;
	int	rheight;

	lheight = trillian_get_height(trillian->ltree);
	rheight = trillian_get_height(trillian->rtree);
	if (lheight > rheight)
	{
		trillian->height = 1 + lheight;
	}
	else
	{
		trillian->height = 1 + rheight;
	}
}
