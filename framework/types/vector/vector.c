/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 02:05:40 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 02:11:09 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_typedata	vector(void)
{
	static struct s_typedata	vector_typedata = {
		.typecreate = (t_any (*)(void))vector_create,
		.typedestroy = (void (*)(t_any))vector_destroy,
		.size = sizeof(struct s_vector);
	};

	return (&vector_typedata);
}
