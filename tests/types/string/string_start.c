/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_start.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:00:37 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/01 16:27:32 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include <stdio.h>

int	main(void)
{
	t_string	string;
	t_i8		current;
	t_u32		index;

	string = string_build("hello string!");
	index = 0;
	current = string_start(string);
	while (current)
	{
		if (current != string->content[index])
			return (1);
		index++;
		current = string_next(string);
	}
	string_destroy(string);	
}
