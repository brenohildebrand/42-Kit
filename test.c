/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:16:46 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 11:28:30 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "integer.h"

int	main(void)
{
	t_vector	vector;
	t_integer	integer;

	vector = vector_create();
	integer = integer_create();
	integer_init(integer, 6);
	vector_push(vector, integer);
	integer = integer_create();
	integer_init(integer, 10);
	vector_push(vector, integer);
	vector_destroy(vector);
	return (0);
}