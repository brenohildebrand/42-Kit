/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_set_at.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:39:46 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/01 16:10:34 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	string_set_at(t_string string, t_u32 index, t_i8 value)
{
	if (index < string->length)
	{
		string->content[index] = value;
	}
	else
		return ;
}
