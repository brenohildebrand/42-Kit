/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_iterate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:03:58 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/01 17:13:38 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	assert_letter(t_i8 value, t_any argument)
{
	static t_i32	index = 0;
	t_string		string;

	string = (t_string)(argument);
	if (value != string->content[index])
		exit(1);
	index++;
}

int	main(void)
{
	t_string	string;

	string = string_build("hello string!");
	string_iterate(string, assert_letter, string);
	string_destroy(string);
	return (0);
}
