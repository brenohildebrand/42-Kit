/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 20:47:31 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/09 22:05:32 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

t_any	any_create(t_type type)
{
	t_any	any;

	any = malloc(type->size);
	if (any == NULL)
	{
		trillian_destroy();
		exit(1);
	}
	trillian_insert(type, any);
	return (any);
}
