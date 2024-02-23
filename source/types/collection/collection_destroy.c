/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collection_destroy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 01:09:43 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:29:29 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection.h"

void	collection_destroy(t_collection collection)
{
	int	i;

	i = collection->start;
	while (i < collection->end)
	{
		any_destroy(collection->content[i]);
		i++;
	}
	deallocate(collection->content);
	delete(collection);
}
