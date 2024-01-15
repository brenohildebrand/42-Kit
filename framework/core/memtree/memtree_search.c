/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memtree_search.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 16:50:42 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/15 16:52:22 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memtree.h"

int	memtree_search(t_memtree memtree, t_any address)
{
	if (memtree == NULL)
		return (0);
	else if (address < memtree->address)
		return (memtree_search());
	else if (address > memt)
}