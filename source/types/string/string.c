/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:43:27 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/22 20:44:51 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_typedata	string(void)
{
	static struct s_typedata	string_typedata = {
		.create = (t_any (*)(void))string_create,
		.destroy = (void (*)(t_any))string_destroy,
		.size = sizeof(struct s_string)	
	};

	return (&string_typedata);
}
