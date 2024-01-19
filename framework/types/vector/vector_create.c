/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 00:59:42 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 11:32:39 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector	vector_create(void)
{
	t_vector	v;

	v = (t_vector)new(vector);
	v->content = NULL;
	v->length = 0;
	v->max_length = 0;
	return (v);
}
