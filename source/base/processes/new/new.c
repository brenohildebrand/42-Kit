/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 01:21:36 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/07 21:13:15 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "new.h"

t_any	new(t_type type)
{
	t_type	type;
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
