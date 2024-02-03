/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:39:46 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/01 23:15:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	string_set(t_string string, t_u32 index, t_i8 value)
{
	if (index < string->length)
	{
		string->content[index] = value;
	}
	else
		return ;
}
