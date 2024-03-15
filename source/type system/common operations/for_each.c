/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_each.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 12:50:51 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/06 14:05:04 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	for_each(void *instance, void (*callback)(t_any, int))
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL);
	assert(type->for_each != NULL);
	type->for_each(instance, callback);
}
