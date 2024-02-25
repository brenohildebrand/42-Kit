/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cdouble_to_any.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:18:28 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 16:20:32 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cdouble.h"

t_any	cdouble_to_any(double value)
{
	t_any	instance;

	instance = create(any);
	instance->type = cdouble();
	instance->value.cdouble = value;
	return (instance);
}
