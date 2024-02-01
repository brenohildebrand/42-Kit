/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:31:31 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/01 16:42:39 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

int	main(void)
{
	t_string	string;
	t_i8		current;
	t_u32		index;

	string = string_build("hello string!");
	current = string_end(string);
	index = string->length - 1;
	while (current)
	{
		if (current != string->content[index])
			return (1);
		current = string_previous(string);
		index--;
	}
	string_destroy(string);
	return (0);
}
