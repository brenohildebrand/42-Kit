/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:34:52 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/25 14:42:13 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

// TODO

int	compare(t_any instance, t_any another_instance)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL);
	assert(type->compare != NULL);
	return (type->compare(instance, another_instance));
}
