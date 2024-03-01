/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_destroy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:42:45 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/29 20:00:41 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

// -- Maybe use a flag in type.h to indicate it's a literal.

void	any_destroy(t_any instance)
{
	if (instance->type->is_value)
	{
		delete(instance);
	}
	else if (instance->type->is_sequence)
	{
		if (instance->type == i8_sequence())
		{
			delete(instance);
		}
		else
		{
			deallocate(instance->value.sequence);
			delete(instance);	
		}
	}
	else
	{
		destroy(instance->value.instance);
		delete(instance);
	}
}
