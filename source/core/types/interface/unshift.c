/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unshift.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 00:15:28 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/14 00:16:11 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	unshift(void *instance, t_any value)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL);
	assert(type->unshift != NULL);
	type->unshift(instance, value);
}
