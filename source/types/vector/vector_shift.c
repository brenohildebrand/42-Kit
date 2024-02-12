/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_shift.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:26:37 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/12 14:59:33 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_any	vector_shift(t_vector vector)
{
	t_any	any;

	if (vector->end < vector->start)
		return (NULL);
	any = vector->content[vector->start];
	vector->content[vector->start] = NULL;
	vector->start++;
	vector->length--;
	return (any);
}
