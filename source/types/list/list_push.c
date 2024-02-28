/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:15:41 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:29:54 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_push(t_list list, t_any value)
{
	if (list->length + 1 > (list->max_length * 3) / 4 || \
		list->end == list->max_length - 1)
	{
		list_expand(list);
	}
	list->end++;
	list->content[list->end] = value;
	list->length++;
}
