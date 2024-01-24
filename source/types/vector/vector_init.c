/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:46:58 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/24 11:11:12 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void	vector_init(t_vector vector)
{
	if (vector->max_length == 0)
	{
		vector->max_length = 16;
		vector->content = allocate(vector->max_length * sizeof(t_any));
	}
}
