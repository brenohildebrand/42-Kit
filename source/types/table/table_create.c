/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 22:57:47 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 01:58:51 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "table.h"

void	*table_create(void)
{
	t_table	instance;

	instance = (t_table)new(table);
	instance->max_length = 16;
	instance->entries = \
		(t_any *)allocate(instance->max_length * sizeof(struct s_entry));
	instance->length = 0;
	return (instance);
}
