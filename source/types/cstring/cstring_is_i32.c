/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstring_is_i32.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 20:18:56 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 20:40:35 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cstring.h"

t_i32	cstring_is_i32(t_cstring value)
{
	t_i32	i;
	t_i64	number;
	t_i32	signal;

	signal = 1;
	i = 0;
	while (i8_is_space(value[i]))
		i++;
	while (i8_is_signal(value[i]))
	{
		if (value[i] == '-')
			signal *= -1;
		i++;
	}
	number = 0;
	while (i8_is_digit(value[i]))
	{
		number = number * 10 + (value[i] - '0');
		if (!i64_is_i32(number * signal))
			return (0);
		i++;
	}
	if (value[i] != '\0')
		return (0);
	return (1);
}
