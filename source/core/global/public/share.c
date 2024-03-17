/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   share.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:36:17 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 14:45:36 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global_map.h"

/**
 * Inserts an entry in the global map.
 * 
 * @param key The key of the entry.
 * @param value The value of the entry.
 */
void	share(t_any key, t_any value)
{
	t_map global_map;

	global_map = global_map_get();
	map_set(global_map, key, value);
}
