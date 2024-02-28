/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:07:25 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 14:39:52 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	map_set(t_map instance, t_any key, t_any value)
{
	int	hash;

	if (instance->length >= instance->max_length / 2)
	{
		map_expand(instance);
	}
	hash = abs(map_hash(key) % (instance->max_length));
	while (1)
	{
		if (instance->entries[hash].key == NULL)
		{
			instance->entries[hash].key = key;
			instance->entries[hash].value = value;
			break ;
		}
		else if (instance->entries[hash].key == key)
		{
			instance->entries[hash].value = value;
			break ;
		}
		else
		{
			hash++;
		}
	}
}
