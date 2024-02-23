/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collection_reverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:04:09 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:29:59 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection.h"

void	collection_reverse(t_collection collection)
{
	int	i;

	i = 0;
	while (i < collection->length)
	{
		collection_push(collection, collection_shift(collection));
		i++;
	}
}
