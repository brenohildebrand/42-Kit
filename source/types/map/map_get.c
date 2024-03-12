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
		else if (map_compare_keys(instance->entries[hash].key, key))
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

t_any	map_get(t_map instance, t_any key)
{
	t_i32	hash;
	t_i32	counter;

	hash = map_hash(instance, key);
	counter = 0;
	while (counter < instance->max_length)
	{
		if (instance->entries[hash].key = NULL)
		{
			map_destroy_key(key);
			return (NULL);
		}
		else if (map_compare_keys(instance->entries[hash].key, key))
		{
			map_destroy_key(key);
			return (instance->entries[hash].value);
		}
		else
		{
			hash++;
			if (hash == instance->max_length)
				hash = 0;
		}
		counter++;
	}
	return (NULL);
}

void	map_set(t_map instance, t_any key, t_any value)
{
	// -- find the appropriate list
	// -- set the list in the hash position for the key

	t_list		list;
	t_i32		hash;
	t_i32		index;
	t_map_entry	entry;

	list = map_get_list(key);
	hash = map_hash(key);
	// -- verify if needs to expand list
	if (list->length + 1 >= list->max_length)
	{
		list_resize(get_length(list) * 2);
		list_inflate(list);
		map_rehash(instance, list);
		// -- after expanding you will need to make sure it starts at 0 and ends at list->max_length
		// -- call another function? list_inflate();
		// -- it will need to expand
		// -- and you'll need to recalculate all hashs
		// -- two copys? yes, at the cost of not reimplementing everything
	}
	index = hash % get_length(list);
	entry = init(create(map), 
	// -- remove init?																																										p									);
	insert(list, index, entry);
	// -- and then insert using linear probing
	index = hash % get_length(list);
	while (1)
	{
		create(map_entry);


		current = get(list, i32_to_any(index));
		if ()
		else if
		index++;
		if (index == get_length(list))
			index = 0;
	}
	// -- look for a valid space from hash and insert the entry
	// -- list resize
	set(list, i32_to_any(hash % get_length(list)), value);
}

void	map_get(t_map instance, t_any key)
{
	t_i32	hash;
	t_list	list;

	hash = map_hash(key);
	list = map_get_list(key);
	return (get(list, i32_to_any(hash % get_length(list))));
}