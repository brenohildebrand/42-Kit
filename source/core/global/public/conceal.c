/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conceal.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:52:44 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 14:44:51 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global_map.h"

/**
 * Deletes an entry from the global map.
 * 
 * @param key The key of the entry.
 * @return The value of the entry.
*/
void	conceal(t_i8 *key)
{
	t_map	global_map;

	global_map = global_map_get();
	map_set(global_map, key, NULL);
	if (get_size(global_map) == 0)
	{
		destroy(global_map);
		*global_map_get_address() = NULL;
	}
}
