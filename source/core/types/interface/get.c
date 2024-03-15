/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 09:28:58 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/05 09:31:02 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

t_any	get(void *instance, t_any key)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL);
	assert(type->get != NULL);
	return (type->get(instance, key));
}
