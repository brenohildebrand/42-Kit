/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_shared.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:09:29 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/19 21:16:43 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global_map.h"

/**
 * Retrieves the value of an entry from the global map.
 * 
 * @param key The key of the entry.
 * @return The value of the entry.
*/
t_any	get_shared(t_any key)
{
	t_map	global_map;

	global_map = global_map_get();
	return (map_retrieve(global_map, key));
}
