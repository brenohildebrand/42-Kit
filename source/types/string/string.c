/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:46:47 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 23:41:24 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_type	string(void)
{
	static struct s_type	type = {
		.name = "string",
		.size = sizeof(struct s_string),
		.create = (void *(*)(void))string_create,
		.destroy = (void (*)(void *))string_destroy,
		// .get = (t_any (*)(void *, t_any))string_get,
		// .set = (void (*)(void *, t_any, t_any))string_set,
	};

	return (&type);
}
