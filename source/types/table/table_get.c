/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table_get.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 03:25:05 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 14:40:06 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "table.h"

t_any	table_get(t_table instance, t_any key)
{
	int	hash;

	hash = abs(table_hash(key) % (instance->max_length));
	while (1)
	{
		if (instance->entries[hash].key == NULL)
		{
			return (NULL);
		}
		else if (instance->entries[hash].key == key)
		{
			return (instance->entries[hash].value);
		}
		else
		{
			hash++;
		}
	}
}
