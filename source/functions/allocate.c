/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:47:06 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 01:32:17 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	*allocate(int size)
{
	void	*pointer;

	assert(size > 0);
	pointer = malloc(size);
	assert(pointer != NULL);
	memtree_insert(NULL, pointer);
	return (pointer);
}
