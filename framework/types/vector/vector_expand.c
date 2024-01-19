/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_expand.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:19:33 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 10:50:34 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void	vector_expand(t_vector vector)
{
	t_any			new_content;
	unsigned int	i;

	new_content = allocate(vector->max_length * 2 * sizeof(t_any));
	i = 0;
	while (i < vector->length)
	{
		((unsigned char *)new_content)[i] = \
			((unsigned char *)vector->content)[i];
		i++;
	}
	vector->max_length *= 2;
	deallocate(vector->content);
	vector->content = new_content;
}