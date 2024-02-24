/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table_copy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:03:14 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 23:46:49 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "table.h"

static void copy_entries(t_table instance, t_table new_instance)
{
	int	i;

	i = 0;
	while (i < instance->max_length)
	{
		new_instance[i] = instance[i];		
		i++;
	}
}

t_table table_copy(t_table instance)
{
	t_table	new_instance;

	new_instance = create(table);
	copy_entries(instance, new_instance);
	new_instance->length = instance->length;
	new_instance->max_length = instance->max_length;
	return (new_instance);
}
