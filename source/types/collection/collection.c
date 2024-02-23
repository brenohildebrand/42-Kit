/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collection.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 22:31:40 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:56:06 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection.h"

t_type	collection(void)
{
	static struct s_type	type = {
		.name = "collection",
		.size = sizeof(struct s_collection),
		.create = collection_create, 
		.destroy = collection_destroy,
		.copy = collection_copy,
		// .get
		// .set
		.push = collection_push,
		.pop = collection_pop
		// .shift
		// .unshift
	};

	return (&type);
}
