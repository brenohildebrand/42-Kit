/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:23:12 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/06 12:24:32 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	sort(void *instance)
{
	t_type	type;
	
	type = memtree_search(instance);
	assert(type != NULL);
	assert(type->sort != NULL);
	return (type->sort(instance));
}
