/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_destroy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:56:09 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/17 15:58:13 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typetree.h"

void	typetree_destroy(void)
{
	t_typetree	*typetree;

	typetree = typetree_get();
	if (typetree == NULL)
		return ;
	typetree_destroy((*typetree)->ltree);
	typetree_destroy((*typetree)->rtree);
	free((*typetree)->address);
	free(*typetree);
}
