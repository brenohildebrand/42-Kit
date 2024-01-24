/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:57:38 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/24 11:08:38 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "integer.h"

t_typedata	integer(void)
{
	static struct s_typedata	integer_typedata = {
		.create = (t_any (*)(void))integer_create,
		.destroy = (void (*)(t_any))integer_destroy,
		.size = sizeof(int)
	};

	return (&integer_typedata);
}
