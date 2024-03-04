/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i32.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:25:26 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/04 14:56:59 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "i32.h"

t_type	i32(void)
{
	static struct s_type	type = {
		.name = "i32",
		.size = sizeof(t_i32),
		.is_value = 1,
		.compare = i32_compare
	};

	return (&type);
}
