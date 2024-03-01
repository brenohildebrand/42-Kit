/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   as_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:35:44 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/01 11:36:00 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

t_any	as_any(void *instance)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL);
	assert(type->as_any != NULL);
	return (type->as_any(instance));
}
