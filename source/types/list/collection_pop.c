/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collection_pop.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:43:19 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:29:48 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection.h"

t_any	collection_pop(t_collection collection)
{
	t_any	any;

	if (collection->end < collection->start)
		return (NULL);
	any = collection->content[collection->end];
	collection->content[collection->end] = NULL;
	collection->end--;
	collection->length--;
	return (any);
}
