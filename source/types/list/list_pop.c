/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_pop.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:43:19 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:29:48 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_any	list_pop(t_list list)
{
	t_any	any;

	if (list->end < list->start)
		return (NULL);
	any = list->content[list->end];
	list->content[list->end] = NULL;
	list->end--;
	list->length--;
	return (any);
}
