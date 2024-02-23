/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collection_copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 22:40:39 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 14:25:41 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection.h"

static void	copy_content(t_collection instance, t_collection new_instance)
{
	int	i;

	i = 0;
	while (i < instance->max_length)
	{
		new_instance->content[i] = instance->content[i];
		i++;
	}
}

t_collection	collection_copy(t_collection instance)
{
	t_collection	new_instance;

	new_instance = create(collection);
	copy_content(instance, new_instance);
	new_instance->start = instance->start;
	new_instance->end = instance->end;
	new_instance->length = instance->length;
	new_instance->max_length = instance->max_length;
	return (new_instance);
}
