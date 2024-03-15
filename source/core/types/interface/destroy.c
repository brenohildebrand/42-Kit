/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 00:26:21 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 01:49:40 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	destroy(void *instance)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL);
	assert(type->destroy != NULL);
	type->destroy(instance);
}
