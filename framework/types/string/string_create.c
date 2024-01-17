/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 23:47:22 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/17 09:42:36 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

t_string	string_create(char *literal)
{
	t_string	string;

	if (!typemap_find(string_get_typecode()))
		typemap_insert(42, string_get_typeinfo());
	string = type_create();
	string->content = 
	
	return (string);
}