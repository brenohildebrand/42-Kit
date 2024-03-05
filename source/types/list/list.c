/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 22:31:40 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 19:19:27 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_type	list(void)
{
	static struct s_type	type = {
		.name = "list",
		.size = sizeof(struct s_list),
		.is_instance = 1,
		.is_sorted = (t_i32 (*)(void *))list_is_sorted,
		.create = (void *(*)(void))list_create,
		.destroy = (void (*)(void *))list_destroy,
		.copy = (void *(*)(void *))list_copy,
		.get = (t_any (*)(void *, t_any))list_get,
		// .set
		.push = (void (*)(void *, t_any))list_push,
		.pop = (t_any (*)(void *))list_pop,
		.rotate = (void (*)(void *))list_rotate,
		.reverse_rotate = (void (*)(void *))list_reverse_rotate,
		.swap = (void (*)(void *))list_swap,
		// .shift
		// .unshift
		.get_length = (t_i32 (*)(void *))list_get_length,
		.as_any = (t_any (*)(void *))list_as_any
	};

	return (&type);
}
