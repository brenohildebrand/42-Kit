/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 00:14:17 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/14 00:15:05 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

t_any	shift(void *instance)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL);
	assert(type->shift != NULL);
	return(type->shift(instance));
}
