/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_is_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 22:17:36 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/10 15:05:20 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

int	string_is_int(t_string string)
{
	long long int	number;
	long long int	signal;
	int				i;

	number = 0;
	signal = 1;
	i = 0;
	if (string_get(string, i) == '-')
		signal = -1;
	if (string_get(string, i) == '-' || 
		string_get(string, i) == '+')
		i++;
	while (i < string->content->length)
	{
		if (string_get(string, i) < '0' || 
			string_get(string, i) > '9')
			return (0);
		number = number * 10 + (string_get(string, i) - '0');
		if (number * signal < -2147483648 || number * signal > 2147483647)
			return (0);
		i++;
	}
	return (1);
}
