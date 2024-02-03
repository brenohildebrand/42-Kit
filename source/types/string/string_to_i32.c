/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_to_i32.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:36:15 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/03 18:49:10 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_i32	string_to_i32(t_string string)
{
	t_i64	number;
	t_i64	signal;
	t_u32	i;

	number = 0;
	signal = 1;
	i = 0;
	if (string->content[i] == '-')
		signal = -1;
	if (string->content[i] == '-' || string->content[i] == '+')
		i++;
	while (i < string->length)
	{
		if (string->content[i] < '0' || string->content[i] > '9')
			return (0);
		number = number * 10 + (string->content[i] - '0');
		if (number * signal < -2147483648 || number * signal > 2147483647)
			return (0);
		i++;
	}
	return (number * signal);
}
