/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 22:52:58 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 23:45:28 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

t_type	map(void)
{
	static struct s_type	type = {
		.name = "map",
		.size = sizeof(struct s_map),
		.create = (void *(*)(void))map_create,
		.destroy = (void (*)(void *))map_destroy,
		.copy = (void *(*)(void *))map_copy,
		.get = (t_any (*)(void *, t_any))map_get,
		.set = (void (*)(void *, t_any, t_any))map_set
	};

	return (&type);
}
