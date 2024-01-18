/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:45:10 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/18 17:48:13 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typetree.h"
#include <stdio.h>

void	helper(t_typetree typetree)
{
	if (typetree == NULL)
		return;
	helper(typetree->ltree);
	printf("%p\n", typetree->address);
	helper(typetree->rtree);	
}

void	typetree_print(void)
{
	t_typetree	*typetree;

	typetree = typetree_get();
	helper(*typetree);
}