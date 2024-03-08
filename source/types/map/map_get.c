/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_get.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 03:25:05 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 14:40:06 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

static t_i32	are_values_the_same(t_any key, t_any another_key)
{
	t_i32	i;

	i = 0;
	while (i < (int)(sizeof(union u_any)))
	{
		if (((unsigned char *)(&key->value))[i] != \
			((unsigned char *)(&another_key->value))[i])
			return (0);
		i++;
	}
	return (1);
}

static t_i32	are_keys_the_same(t_any key, t_any another_key)
{
	t_i32	i;
	t_i8	*key_sequence;
	t_i8	*another_key_sequence;

	if (key->type != another_key->type)
	{
		return (0);
	}
	else if (key->type == i8_sequence())
	{
		i = 0;
		key_sequence = key->value.sequence;
		another_key_sequence = another_key->value.sequence;
		while (key_sequence[i] == another_key_sequence[i] && key_sequence[i])
			i++;
		if (key_sequence[i] == another_key_sequence[i] && !key_sequence[i])
			return (1);
		return (0);
	}
	else if (are_values_the_same(key, another_key))
	{
		return (1);
	}
	return (0);
}

t_any	map_get(t_map instance, t_any key)
{
	int	hash;

	hash = abs(map_hash(key) % (instance->max_length));
	while (1)
	{
		if (instance->entries[hash].key == NULL)
		{
			any_destroy(key);
			return (NULL);
		}
		else if (are_keys_the_same(instance->entries[hash].key, key))
		{
			any_destroy(key);
			return (instance->entries[hash].value);
		}
		else
		{
			hash++;
		}
	}
}
