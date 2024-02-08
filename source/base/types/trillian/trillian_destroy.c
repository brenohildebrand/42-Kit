/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_destroy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:56:09 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/07 21:17:21 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trillian.h"

static void	helper(t_trillian trillian)
{
	if (trillian == NULL)
		return ;
	helper(trillian->ltree);
	helper(trillian->rtree);
	free(trillian->address);
	free(trillian);
}

void	trillian_destroy(void)
{
	t_trillian	*trillian;

	trillian = trillian_get();
	helper(*trillian);
}
