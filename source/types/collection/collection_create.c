/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collection_create.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 22:29:03 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:34:52 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection.h"

t_collection	collection_create(void)
{
	t_collection	collection;

	collection = (t_collection)new(collection);
	collection->max_length = 16;
	collection->content = \
		(t_any *)allocate(collection->max_length * sizeof(t_any));
	collection->length = 0;
	collection->start = collection->max_length / 2;
	collection->end = collection->start - 1;
	return (collection);
}
