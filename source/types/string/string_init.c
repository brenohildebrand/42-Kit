/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:36:12 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/01 16:22:12 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	string_init(t_string string, t_i8 *value)
{
	t_u32	i;

	string->length = 0;
	while (value[string->length])
		string->length++;
	while (string->max_length < string->length)
	{
		if (string->max_length == 0)
			string->max_length = 1;
		else
			string->max_length *= 2;
	}
	string->content = allocate(string->max_length * sizeof(t_i8));
	i = 0;
	while (i < string->length)
	{
		string->content[i] = value[i];
		i++;
	}
}
