/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 01:50:24 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 00:11:36 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

void	*create(t_type (*signature)(void))
{
	t_type	type;

	type = signature();
	assert(type->create != NULL);
	return (type->create());
}
