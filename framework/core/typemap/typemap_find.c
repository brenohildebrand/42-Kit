/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typemap_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:05:10 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/17 12:13:22 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typemap.h"

t_typedata	typemap_find(t_typecode key)
{
	t_typemap		typemap;
	unsigned int	hash;

	typemap = typemap_get();
	hash = typemap_hash(key);
	while (typemap->entries[hash].key != key)
	{
		hash++;
		if (hash == TYPEMAP_MAX_ENTRIES - 1)
			hash = 0;
	}
	return (typemap->entries[hash].value);
}
