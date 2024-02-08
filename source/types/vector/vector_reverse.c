/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:04:09 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/06 16:07:53 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void	vector_reverse(t_vector vector)
{
	t_u32	i;

	i = 0;
	while (i < vector_get_length(vector))
	{
		vector_push(vector, vector_shift(vector));
		i++;
	}
}
