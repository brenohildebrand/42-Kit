/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:34:52 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 00:11:12 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

t_i32	compare(void *instance, void *another_instance)
{
	t_type	type;
	t_type	another_type;

	type = memtree_search(instance);
	assert(type != NULL);
	another_type = memtree_search(another_instance);
	assert(another_type != NULL);
	if (type != another_type)
	{
		error("No way! You can't compare instances from two different types.");
	}
	return (type->compare(instance, another_instance));
}
