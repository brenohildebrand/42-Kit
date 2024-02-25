/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slice.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:40:47 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/25 14:42:27 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	slice(void *instance, int start, int end)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL);
	assert(type->slice != NULL);
	type->slice(instance, start, end);
}
