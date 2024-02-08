/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 00:59:42 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/08 11:43:34 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector	vector_create(void)
{
	static struct s_type	type = {
		.destroy = (void (*)(t_any))vector_destroy,
		.size = sizeof(struct s_vector)
	};
	t_vector				vector;

	vector = (t_vector)new(&type);
	vector->max_length = 16;
	vector->content = any_create(vector->max_length * sizeof(t_any));
	vector->length = 0;
	vector->start = vector->max_length / 2;
	vector->end = vector->max_length / 2;
	return (vector);
}
