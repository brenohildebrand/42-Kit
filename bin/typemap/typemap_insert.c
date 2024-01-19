/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typemap_insert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:00:46 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/17 13:21:13 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typemap.h"

void	typemap_insert(t_typecode key, t_typedata value)
{
	t_typemap		typemap;
	unsigned int	hash;

	typemap = typemap_get();
	hash = typemap_hash(key);
	while (typemap->entries[hash].key != 0 && typemap->entries[hash].value != 0)
	{
		hash++;
		if (hash == TYPEMAP_MAX_ENTRIES - 1)
			hash = 0;
	}
	typemap->entries[hash] = (struct s_typemapentry){
		.key = key,
		.value = value,
	};
}
