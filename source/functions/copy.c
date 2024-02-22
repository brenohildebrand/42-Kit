/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:46:32 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 17:48:33 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	*copy(void	*instance)
{
	t_type	type;

	type = memtree_search(instance);
	assert(type != NULL);
	assert(type->copy != NULL);
	return (type->copy(instance));
}
