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

void	list_expand(t_list list)
{
	t_any	*new_content;
	int		new_start;
	int		new_end;
	int		i;

	list->max_length = list->max_length * 2;
	new_start = (list->max_length - list->length) / 2;
	new_end = new_start + list->length - 1;
	new_content = (t_any *)allocate(list->max_length * sizeof(t_any));
	i = 0;
	while (i < list->length)
	{
		new_content[i + new_start] = list->content[i + list->start];
		i++;
	}
	deallocate(list->content);
	list->start = new_start;
	list->end = new_end;
	list->content = new_content;
}
