/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:44:58 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/13 15:27:14 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_string	string_create(char *cstring)
{
	static struct s_type	type = {
		.name = "string",
		.destroy = (void (*)(t_any))string_destroy,
		.size = sizeof(struct s_string)	
	};
	t_string				string;

	string = (t_string)new(&type);
	string->content = vector_create();
	while (*cstring)
	{
		vector_push(string->content, character_create(*cstring));
		cstring++;
	}
	return (string);
}
