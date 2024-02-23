/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collection_create.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 22:29:03 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 19:20:22 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection.h"

t_collection	collection_create(void)
{
	t_collection	instance;

	instance = (t_collection)new(collection);
	instance->max_length = 16;
	instance->content = \
		(t_any *)allocate(instance->max_length * sizeof(t_any));
	instance->length = 0;
	instance->start = instance->max_length / 2;
	instance->end = instance->start - 1;
	return (instance);
}
