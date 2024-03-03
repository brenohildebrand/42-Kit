/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_destroy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:01:49 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 02:03:44 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	map_destroy(t_map instance)
{
	t_i32	i;

	i = 0;
	while (i < instance->max_length)
	{
		if (instance->entries[i].key != NULL)
		{
			any_destroy(instance->entries[i].key);
			any_destroy(instance->entries[i].value);
		}
		i++;
	}
	deallocate(instance->entries);
	delete(instance);
}
