/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table_expand.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 03:28:33 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 14:42:32 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "table.h"

void	table_expand(t_table instance)
{
	int						i;
	struct s_table_entry	*new_entries;

	i = 0;
	new_entries = \
		allocate(instance->max_length * 2 * sizeof(struct s_table_entry));
	while (i < instance->max_length)
	{
		new_entries[i] = instance->entries[i];
		i++;
	}
	deallocate(instance->entries);
	instance->entries = new_entries;
	instance->max_length = instance->max_length * 2;
}
