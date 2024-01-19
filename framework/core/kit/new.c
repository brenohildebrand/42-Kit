/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 01:21:36 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 01:59:44 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "kit.h"

t_any	new(t_typedata (*type)(void))
{
	t_typedata	typedata;
	t_any		address;
	
	typedata = type();
	typemap_register(typedata);
	address = malloc(typedata->size);
	if (address == NULL)
	{
		typetree_destroy();
		exit(1);
	}
	typetree_insert(typedata, address);
	return (address);
}