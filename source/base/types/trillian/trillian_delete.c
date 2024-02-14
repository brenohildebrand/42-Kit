/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trillian_delete.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:25:43 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/13 15:21:56 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trillian.h"

static t_type	yet_another_helper(t_trillian *trillian)
{
	t_trillian	min_root;
	t_type		min_type;

	if ((*trillian)->ltree == NULL)
	{
		min_root = *trillian;
		min_type = min_root->type;
		*trillian = min_root->rtree;
		free(min_root);
	}
	else
	{
		min_type = yet_another_helper(&((*trillian)->ltree));
	}
	trillian_rebalance(trillian);
	return (min_type);
}

static t_any	another_helper(t_trillian *trillian)
{
	t_trillian	min_root;
	t_any		min_address;

	if ((*trillian)->ltree == NULL)
	{
		min_root = *trillian;
		min_address = min_root->address;
	}
	else
	{
		min_address = another_helper(&((*trillian)->ltree));
	}
	return (min_address);
}

static void	helper(t_trillian *trillian, t_any address)
{
	t_trillian	old_root;

	if (*trillian == NULL)
		return ;
	else if ((*trillian)->address == address)
	{
		if ((*trillian)->rtree != NULL)
		{
			(*trillian)->address = another_helper(&((*trillian)->rtree));
			(*trillian)->type = yet_another_helper(&((*trillian)->rtree));
			free(address);
		}
		else
		{
			old_root = *trillian;
			*trillian = (*trillian)->ltree;
			free(old_root->address);
			free(old_root);
		}
	}
	else if (address < (*trillian)->address)
		helper(&((*trillian)->ltree), address);
	else if (address > (*trillian)->address)
		helper(&((*trillian)->rtree), address);
	trillian_rebalance(trillian);
}

void	trillian_delete(t_any address)
{
	t_trillian	*trillian;

	trillian = trillian_get();
	helper(trillian, address);
}
