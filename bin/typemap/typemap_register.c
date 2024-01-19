/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typemap_register.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 00:46:10 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 00:52:15 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typemap.h"

void	typemap_register(t_typecode key, t_typedata value)
{
	if (key->value == 0)
	{
		write("An error occured.", 18); 
		write("Zero is the only INVALID typecode value.", 41);
		write("You better check your typecodes.\n", 34);
		typetree_destroy();
		exit(1);
	}
	if (!typemap_find(key))
		typemap_insert(key, value);
}