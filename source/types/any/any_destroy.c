/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_destroy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:42:45 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 16:42:58 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

// -- Maybe use a flag in type.h to indicate it's a literal.

void	any_destroy(t_any instance)
{
	if (instance->type == cint())
	{
		delete(instance);
	}
	else if (instance->type == cdouble())
	{
		delete(instance);
	}
	else if (instance->type == cstring())
	{
		delete(instance);
	}
	else
	{
		destroy(instance->value.instance);
		delete(instance);
	}
}
