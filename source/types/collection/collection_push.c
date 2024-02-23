/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collection_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:15:41 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:29:54 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection.h"

void	collection_push(t_collection collection, t_any value)
{
	if (collection->length + 1 > (collection->max_length * 3) / 4 || \
		collection->end == collection->max_length - 1)
	{
		collection_expand(collection);
	}
	collection->end++;
	collection->content[collection->end] = value;
	collection->length++;
}
