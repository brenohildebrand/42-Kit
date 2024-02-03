/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_is_i32.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 05:44:00 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/02 05:46:34 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

int	main(void)
{
	t_string	number;

	number = string_build("2147483647");
	if (string_is_i32(number) == 0)
	{
		string_destroy(number);
		return (1);	
	}
	string_destroy(number);
	return (0);
}