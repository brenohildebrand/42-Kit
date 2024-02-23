/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collection_expand.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:19:33 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:29:34 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection.h"

void	collection_expand(t_collection collection)
{
	t_any	*new_content;
	int		new_start;
	int		new_end;
	int		i;

	collection->max_length = collection->max_length * 2;
	new_start = (collection->max_length - collection->length) / 2;
	new_end = new_start + collection->length - 1;
	new_content = (t_any *)allocate(collection->max_length * sizeof(t_any));
	i = 0;
	while (i < collection->length)
	{
		new_content[i + new_start] = collection->content[i + collection->start];
		i++;
	}
	deallocate(collection->content);
	collection->start = new_start;
	collection->end = new_end;
	collection->content = new_content;
}
