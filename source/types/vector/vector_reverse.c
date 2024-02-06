/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:04:09 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/06 16:05:50 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void	vector_reverse(t_vector vector)
{
	t_vector	new_vector;

	new_vector = vector_build();
	while (vector_get_length(vector))
		vector_push(new_vector, vector_pop(vector));
}
