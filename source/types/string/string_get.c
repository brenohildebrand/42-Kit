/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_get.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:37:23 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/01 23:15:26 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_i8	string_get(t_string string, t_u32 index)
{
	if (index < string->length)
		return (string->content[index]);
	else
		return (0);
}
