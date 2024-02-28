/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:57:26 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 12:56:27 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

t_type	any(void)
{
	static struct s_type	type = {
		.name = "any",
		.size = sizeof(struct s_any),
		.create = (void *(*)(void))any_create,
		.destroy = (void (*)(void *))any_destroy
	};

	return (&type);
}
