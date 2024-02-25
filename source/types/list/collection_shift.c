/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collection_shift.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:26:37 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:30:08 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection.h"

t_any	collection_shift(t_collection collection)
{
	t_any	any;

	if (collection->end < collection->start)
		return (NULL);
	any = collection->content[collection->start];
	collection->content[collection->start] = NULL;
	collection->start++;
	collection->length--;
	return (any);
}
