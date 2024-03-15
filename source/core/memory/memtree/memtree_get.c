/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memtree_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:26:10 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/15 16:21:44 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"

t_memtree	*memtree_get(void)
{
	static t_memtree	memtree = NULL;

	return (&memtree);
}
