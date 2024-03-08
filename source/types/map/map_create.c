/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 22:57:47 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 14:40:50 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

t_map	map_create(void)
{
	t_map	instance;
	t_i32	i;

	instance = (t_map)new(map);
	instance->max_length = 16;
	instance->entries = \
		allocate(instance->max_length * sizeof(struct s_map_entry));	
	i = 0;
	while (i < instance->max_length)
	{
		instance->entries[i].key = 0;
		instance->entries[i].value = 0;
		i++;
	}
	instance->length = 0;
	return (instance);
}
