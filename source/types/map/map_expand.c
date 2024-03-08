/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_expand.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 03:28:33 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 14:42:32 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

// -- bug -> should not just copy / should re-hash

void	map_expand(t_map instance)
{
	t_i32	i;
	struct s_map_entry	*old_entries;
	t_i32				old_max_length;

	old_entries = instance->entries;
	old_max_length = instance->max_length;
	instance->entries = \
		allocate(old_max_length * 2 * sizeof(struct s_map_entry));
	instance->max_length = old_max_length * 2;
	i = 0;
	while (i < old_max_length)
	{
		if (old_entries[i].key != NULL)
		{
			map_set(instance, old_entries[i].key, old_entries[i].value);
		}
		i++;
	}
	deallocate(old_entries);
}
