/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_copy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:03:14 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 23:46:49 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

static void	copy_entries(t_map instance, t_map new_instance)
{
	int	i;

	while (new_instance->max_length < instance->max_length)
	{
		map_expand(new_instance);
	}
	i = 0;
	while (i < instance->max_length)
	{
		new_instance->entries[i] = instance->entries[i];
		i++;
	}
}

t_map	map_copy(t_map instance)
{
	t_map	new_instance;

	new_instance = create(map);
	copy_entries(instance, new_instance);
	new_instance->length = instance->length;
	new_instance->max_length = instance->max_length;
	return (new_instance);
}
