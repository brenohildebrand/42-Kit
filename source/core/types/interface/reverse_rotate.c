/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 07:58:00 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/05 08:09:59 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	reverse_rotate(void *instance)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL);
	assert(type->reverse_rotate != NULL);
	type->reverse_rotate(instance);
}
