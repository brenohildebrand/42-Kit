/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_search.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:31:41 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/07 21:18:17 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trillian.h"

static t_type	helper(t_trillian trillian, t_any address)
{
	if (trillian->address == address)
		return (trillian->type);
	else if (address < trillian->address)
		return (helper(trillian->ltree, address));
	else if (address > trillian->address)
		return (helper(trillian->rtree, address));
	return (NULL);
}

t_type	trillian_search(t_any address)
{
	t_trillian	*trillian;

	trillian = trillian_get();
	return (helper(*trillian, address));
}
