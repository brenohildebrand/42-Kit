/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 07:58:17 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 00:12:41 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

void	swap(void *instance, t_any key, t_any another_key)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL);
	assert(type->swap != NULL);
	type->swap(instance, key, another_key);
}
