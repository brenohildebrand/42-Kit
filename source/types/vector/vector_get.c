/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_get.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:44:17 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/10 15:03:09 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_any	vector_get(t_vector vector, int index)
{
	if (index >= vector->length)
		return (NULL);
	return (vector->content[vector->start + index]);
}
