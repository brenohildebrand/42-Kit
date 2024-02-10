/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:46:21 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/10 15:03:26 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

// -- Set
// -- Destroys the value at index and overwrites it with value.

void	vector_set(t_vector vector, int index, t_any value)
{
	if (index >= vector->length)
		return ;
	any_destroy(vector->content[vector->start + index]);
	vector->content[vector->start + index] = value;	
}
