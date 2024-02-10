/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:47:06 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/09 22:48:35 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "allocate.h"

void	*allocate(unsigned int size)
{
	void	*pointer;

	pointer = malloc(size);
	if (pointer == NULL)
	{
		trillian_destroy();
		exit(1);
	}
	trillian_insert(NULL, pointer);
	return (pointer);
}
