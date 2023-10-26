/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_rmanager.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:41:35 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/26 15:43:29 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/avltree.h"

void	destroy_rmanager(t_usize_avltree *t)
{
	t_i32	direction;

	if (*t != AVL_EMPTY)
	{
		direction = 0;
		while (direction < 2)
		{
			destroy_rmanager(&(*t)->child[direction]);
			direction++;
		}
		free((*t)->data);
		free(*t);
		*t = AVL_EMPTY;
	}
}