/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:07:25 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 14:39:52 by bhildebr         ###   ########.fr       */
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

void	map_set(t_map instance, t_any key, t_any value)
{
	t_i32	hash;
	
	if (instance->length >= instance->max_length / 2)
	{
		map_expand(instance);
	}
	hash = abs(map_hash(key) % (instance->max_length));
	while (1)
	{
		if (instance->entries[hash].key == NULL)
		{
			instance->entries[hash].key = key;
			instance->entries[hash].value = value;
			instance->length++;
			break ;
		}
		else if (are_keys_the_same(instance->entries[hash].key, key))
		{
			any_destroy(key);
			if (value == NULL)
			{
				any_destroy(instance->entries[hash].value);
			}
			instance->entries[hash].value = value;
			break ;
		}
		else
		{
			hash++;
		}
	}
}
