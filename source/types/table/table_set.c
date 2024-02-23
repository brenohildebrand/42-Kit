/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:07:25 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 14:39:52 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "table.h"

void	table_set(t_table instance, t_any key, t_any value)
{
	int	hash;

	if (instance->length >= instance->max_length / 2)
	{
		table_expand(instance);
	}
	hash = abs(table_hash(key) % (instance->max_length));
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
