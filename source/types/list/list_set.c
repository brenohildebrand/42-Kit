/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_set.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:46:21 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:30:03 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_set(t_list list, int index, t_any value)
{
	if (index >= list->length)
		return ;
	list->content[list->start + index] = value;
}
