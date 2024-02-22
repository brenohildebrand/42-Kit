/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:38:53 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 17:46:49 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	*init(void	*instance, t_any value)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL);
	assert(type->init != NULL);
	return (type->init(instance, value));
}
