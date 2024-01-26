/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:28:38 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/25 18:41:24 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "framework.h"

/**
 * @brief Allocates a block of memory and returns a pointer to it.
 * 
 * @param size The size in bytes.
 * @return A pointer to the allocated memory.
*/
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
