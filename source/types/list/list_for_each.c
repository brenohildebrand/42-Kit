/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_for_each.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:58:08 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/06 14:04:33 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_for_each(t_list instance, void (*callback)(t_any, t_i32))
{
	t_i32	i;
	t_any	current;

	i = 0;
	while (i < instance->length)
	{
		current = list_get(instance, i32_to_any(instance->start + i));
		callback(current, i);
		i++;
	}
}
