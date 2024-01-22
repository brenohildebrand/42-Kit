/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:28:38 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 23:04:19 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typekit.h"

t_any	allocate(t_typesize size)
{
	t_any	address;

	address = malloc(size);
	if (address == NULL)
	{
		typetree_destroy();
		exit(1);
	}
	typetree_insert(NULL, address);
	return (address);
}