/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:07:25 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 01:06:48 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "table.h"

void	table_set(t_table instance, t_any key, t_any value)
{
	int				hash;
	int 			index;
	t_table_entry	current;

	hash = table_hash(key);
	index = abs(hash % (instance->entries->length - 1));
	current = collection_get(instance->entries, index);
	while (current != NULL)
	{
		// compare current.key with key
		if (compare(current.key, key) == 0)
		{
			collection_set(instance->entries, index, value);
		}
		index++;
		if (index >= instance->entries->max_length)
		{
			index = 0;
		}
	}
}
