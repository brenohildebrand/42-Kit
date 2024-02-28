/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstring.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:14:43 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 13:36:28 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cstring.h"

t_type	cstring(void)
{
	static struct s_type	type = {
		.name = "cstring",
		.size = sizeof(char *),
		.is_literal = 1
	};

	return (&type);
}
