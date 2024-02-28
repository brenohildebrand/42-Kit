/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_unshift.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:30:05 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:30:13 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_unshift(t_list list, t_any value)
{
	if (list->length + 1 > (list->max_length * 3) / 4 || \
		list->start == 0)
	{
		list_expand(list);
	}
	list->start--;
	list->content[list->start] = value;
	list->length++;
}
