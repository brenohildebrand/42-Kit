/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:04:09 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/09 23:04:02 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void	vector_reverse(t_vector vector)
{
	unsigned int	i;

	i = 0;
	while (i < vector->length)
	{
		vector_push(vector, vector_shift(vector));
		i++;
	}
}
