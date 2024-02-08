/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:34:02 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/07 21:18:02 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trillian.h"

t_trillian	trillian_create(t_type type, t_any address)
{
	t_trillian	trillian;

	trillian = malloc(sizeof(struct s_trillian));
	if (trillian == NULL)
	{
		trillian_destroy();
		return (NULL);
	}
	trillian->height = 1;
	trillian->ltree = NULL;
	trillian->rtree = NULL;
	trillian->address = address;
	trillian->type = type;
	return (trillian);
}
