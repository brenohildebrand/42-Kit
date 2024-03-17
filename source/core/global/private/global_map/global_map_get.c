/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global_map_get.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:25:03 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 14:41:24 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global_map.h"

t_map	global_map_get(void)
{
	t_map	*global_map_address;

	global_map_address = global_map_get_address();
	if (*global_map_address == NULL)
	{
		*global_map_address = create(map);
	}
	return (*global_map_address);
}
