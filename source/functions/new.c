/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 01:21:36 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 01:40:27 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	*new(t_type type)
{
	void	*instance;

	instance = malloc(type->size);
	assert(instance != NULL);
	memtree_insert(type, instance);
	return (instance);
}
