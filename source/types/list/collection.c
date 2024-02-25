/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collection.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 22:31:40 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 19:19:27 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection.h"

t_type	collection(void)
{
	static struct s_type	type = {
		.name = "collection",
		.size = sizeof(struct s_collection),
		.create = (void *(*)(void))collection_create, 
		.destroy = (void (*)(void *))collection_destroy,
		.copy = (void *(*)(void *))collection_copy,
		// .get
		// .set
		.push = (void (*)(void *, t_any))collection_push,
		.pop = (t_any (*)(void *))collection_pop
		// .shift
		// .unshift
	};

	return (&type);
}
