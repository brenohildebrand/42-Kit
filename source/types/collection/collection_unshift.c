/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collection_unshift.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:30:05 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:30:13 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection.h"

void	collection_unshift(t_collection collection, t_any value)
{
	if (collection->length + 1 > (collection->max_length * 3) / 4 || \
		collection->start == 0)
	{
		collection_expand(collection);
	}
	collection->start--;
	collection->content[collection->start] = value;
	collection->length++;
}
