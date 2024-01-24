/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 01:09:43 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/24 11:10:59 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void	vector_destroy(t_vector vector)
{
	while (vector->length)
		vector_pop(vector);
	deallocate(vector->content);
	delete(vector);
}
