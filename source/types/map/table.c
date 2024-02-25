/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 22:52:58 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 23:45:28 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "table.h"

t_type	table(void)
{
	static struct s_type	type = {
		.name = "table",
		.size = sizeof(struct s_table),
		.create = (void *(*)(void))table_create,
		.destroy = (void (*)(void *))table_destroy,
		.copy = (void *(*)(void *))table_copy,
		.get = (t_any (*)(void *, t_any))table_get,
		.set = (void (*)(void *, t_any, t_any))table_set
	};

	return (&type);
}
