/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 20:09:16 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 00:12:44 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

t_any	to_any(void *instance)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL);
	assert(type->to_any != NULL);
	return (type->to_any(instance));
}
