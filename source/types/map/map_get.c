/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_get.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 03:25:05 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 14:40:06 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

t_any	map_get(t_map instance, t_any key)
{
	int	hash;

	hash = abs(map_hash(key) % (instance->max_length));
	while (1)
	{
		if (instance->entries[hash].key == NULL)
		{
			any_destroy(key);
			return (NULL);
		}
		else if (map_compare_keys(instance->entries[hash].key, key))
		{
			any_destroy(key);
			return (instance->entries[hash].value);
		}
		else
		{
			hash++;
		}
	}
}
