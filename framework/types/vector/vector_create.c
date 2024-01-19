/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 00:59:42 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 02:11:12 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector	vector_create(void)
{
	t_vector	vector;

	vector = (t_vector)new(vector);
	vector->content = NULL;
	vector->length = 0;
	vector->size = 0;
	return (vector);
}
