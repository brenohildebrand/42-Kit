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

t_any	list_shift(t_list list)
{
	t_any	any;

	if (list->end < list->start)
		return (NULL);
	any = list->content[list->start];
	list->content[list->start] = NULL;
	list->start++;
	list->length--;
	return (any);
}
