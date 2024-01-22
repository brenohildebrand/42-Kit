/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 02:05:40 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 11:35:25 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_typedata	vector(void)
{
	static struct s_typedata	vector_typedata = {
		.create = (t_any (*)(void))vector_create,
		.destroy = (void (*)(t_any))vector_destroy,
		.size = sizeof(struct s_vector)
	};

	return (&vector_typedata);
}
