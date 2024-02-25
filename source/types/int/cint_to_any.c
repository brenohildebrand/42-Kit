/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cint_to_any.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:53:03 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 16:05:52 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cint.h"

t_any	cint_to_any(int value)
{
	t_any	instance;

	instance = create(any);
	instance->type = cint();
	instance->value.cint = value;
	return (instance);
}
