/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 22:52:58 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:57:32 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "table.h"

t_type	table(void)
{
	static struct s_type	type = {
		.name = "table",
		.size = sizeof(struct s_table),
		.create = table_create,
		.destroy = table_destroy,
		.copy = table_copy,
		.get = table_get,
		.set = table_set
	};

	return (&type);
}
