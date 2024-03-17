/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_each.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 12:50:51 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 00:11:49 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

void	for_each(void *instance, void (*callback)(t_any, int))
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL);
	assert(type->for_each != NULL);
	type->for_each(instance, callback);
}
