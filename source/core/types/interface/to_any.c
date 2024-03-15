/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 20:09:16 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/29 20:10:45 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

t_any	to_any(void *instance)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL);
	assert(type->to_any != NULL);
	return (type->to_any(instance));
}
