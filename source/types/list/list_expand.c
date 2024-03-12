/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_expand.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:19:33 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:29:34 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_expand(t_list instance)
{
	t_any	*new_content;
	t_i32	new_max_length;
	t_i32	new_start;
	t_i32	new_end;
	t_i32	i;

	new_max_length = instance->max_length * 2;
	new_start = (new_max_length - instance->length) / 2;
	new_end = new_start + instance->length - 1;
	new_content = (t_any *)allocate(new_max_length * sizeof(t_any));
	i = 0;
	while (i < instance->length)
	{
		new_content[new_start + i] = instance->content[instance->start + i];
		i++;
	}
	deallocate(instance->content);
	instance->max_length = new_max_length;
	instance->start = new_start;
	instance->end = new_end;
	instance->content = new_content;
}
