/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_shift.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:26:37 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:30:08 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_any	list_shift(t_list instance)
{
	t_any	any;

	if (instance->end < instance->start)
		return (NULL);
	any = instance->content[instance->start];
	instance->content[instance->start] = NULL;
	instance->start++;
	instance->length--;
	return (any);
}
