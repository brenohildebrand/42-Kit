/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memtree_get_height.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:33:34 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/21 11:22:05 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memtree.h"

int	memtree_get_height(t_memtree memtree)
{
	if (memtree == NULL)
	{
		return (0);
	}
	else
	{
		return (memtree->height);
	}
}
