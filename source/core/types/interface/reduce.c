/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reduce.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:40:01 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/10 12:12:53 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

t_any	reduce(void *instance, t_any accumulator, t_any (*callback)(t_any, t_any, int))
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL);
	assert(type->reduce != NULL);
	return (type->reduce(instance, accumulator, callback));
}
