/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:32:14 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 00:12:19 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

void	push(void *instance, t_any value)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL);
	assert(type->push != NULL);
	type->push(instance, value);
}
