/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 01:21:36 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/24 23:22:59 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "framework.h"

t_any	new(t_typedata (*type)(void))
{
	t_typedata	typedata;
	t_any		address;

	typedata = type();
	address = malloc(typedata->size);
	if (address == NULL)
	{
		typetree_destroy();
		exit(1);
	}
	typetree_insert(typedata, address);
	return (address);
}
