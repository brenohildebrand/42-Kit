/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 01:21:36 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/24 11:06:32 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typekit.h"

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
