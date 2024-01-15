/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memtree_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:39:05 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/12 18:50:46 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memtree.h"

t_memtree	memtree_get(void)
{
	static struct s_memtree	memtree;

	return (&memtree);
}
