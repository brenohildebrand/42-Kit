/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collection_copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 22:40:39 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:50:03 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection.h"

static t_any	*copy_content(t_collection instance)
{
	t_any	*copy;
	int		i;

	copy = (t_any *)allocate(instance->max_length * sizeof(t_any));
	i = 0;
	while (i < instance->max_length)
	{
		copy[i] = instance->content[i];
		i++;
	}
	return (copy);
}

t_collection	collection_copy(t_collection instance)
{
	t_collection	copy;

	copy = create(collection);
	copy->content = copy_content(instance);
	copy->start = instance->start;
	copy->end = instance->end;
	copy->length = instance->length;
	copy->max_length = instance->max_length;
	return (copy);
}
