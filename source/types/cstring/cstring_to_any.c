/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstring_to_any.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:01:59 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/25 19:22:04 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

t_any	cstring_to_any(t_cstring literal)
{
	t_any	instance;

	instance = create(any);
	instance->type = cstring();
	instance->value.cstring = literal;
	return (instance);
}
