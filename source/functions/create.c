/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 01:50:24 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 19:08:00 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	*create(t_type (*signature)(void))
{
	t_type	type;

	type = memtree_search(signature());
	assert(type != NULL);
	assert(type->create != NULL);
	return (type->create());
}
