/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:43:19 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/12 14:58:06 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_any	vector_pop(t_vector vector)
{
	t_any	any;

	if (vector->end < vector->start)
		return (NULL);
	any = vector->content[vector->end];
	vector->content[vector->end] = NULL;
	vector->end--;
	vector->length--;
	return (any);
}
