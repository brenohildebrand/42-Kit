/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 04:50:03 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 00:12:17 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

void	print(t_any instance)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL);
	assert(type->push != NULL);
	type->print(instance);
}
