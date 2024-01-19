/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 01:09:43 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 02:04:52 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void	vector_destroy(t_vector vector)
{
	// go through each element and call their destroy function
	// then call delete for the vector.

	// yeahh... in fact you cannot put numbers like an int or char
	// inside the vector. A price you have to pay. But for complex 
	// projects, it's worth it. So do create an integer type and
	// a character type and whatever... Just do it. Measure the time
	// if you will.

	delete(vector);
}