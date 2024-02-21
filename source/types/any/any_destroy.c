/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_destroy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:42:45 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/21 12:10:14 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

void	any_destroy(t_any any)
{
	t_type	type;

	type = memtree_search(any);
	if (type == NULL)
	{
		memtree_delete(any);
	}
	else
	{
		type->destroy(any);
	}
}
