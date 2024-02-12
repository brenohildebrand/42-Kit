/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trillian_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:35:24 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/12 15:09:53 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trillian.h"

static void	helper(t_trillian *trillian, t_type type, t_any address)
{
	if (*trillian == NULL)
	{
		*trillian = trillian_create(type, address);
	}
	else if (address == (*trillian)->address)
	{
		return ;
	}
	else
	{
		if (address < (*trillian)->address)
		{
			helper(&((*trillian)->ltree), type, address);
		}
		else
		{
			helper(&((*trillian)->rtree), type, address);
		}
		trillian_rebalance(trillian);
	}
}

void	trillian_insert(t_type type, t_any address)
{
	t_trillian	*trillian;

	trillian = trillian_get();
	helper(trillian, type, address);
	// trillian_print();
}
