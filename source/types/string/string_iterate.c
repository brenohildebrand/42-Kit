/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_iterate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:49:24 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/01 16:08:28 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	string_iterate(
	t_string string, 
	void (*callback)(t_i8, t_any), 
	t_any argument
){
	t_u32	i;

	i = 0;
	while (i < string->length)
	{
		callback(string->content[i], argument);
		i++;
	}
}
