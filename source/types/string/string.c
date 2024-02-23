/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:46:47 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 18:33:12 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_type	string(void)
{
	static struct s_type	type = {
		.name = "string",
		.size = sizeof(struct s_string),
		.create = string_create,
		.destroy = string_destroy,
		.get = string_get,
		.set = string_set,
	};

	return (&type);
}
