/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_expand.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:19:33 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/10 15:02:55 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void	vector_expand(t_vector vector)
{
	t_any	new_content;
	int		new_start;
	int		new_end;
	int		i;

	vector->max_length = vector->max_length * 2;
	new_start = (vector->max_length - vector->length) / 2;
	new_end = new_start + vector->length - 1;
	new_content = allocate(vector->max_length * sizeof(t_any));
	i = 0;
	while (i < vector->length)
	{
		((unsigned char *)new_content)[i + new_start] = \
			((unsigned char *)vector->content)[i + vector->start];
		i++;
	}
	deallocate(vector->content);
	vector->start = new_start;
	vector->end = new_end;
	vector->content = new_content;
}
