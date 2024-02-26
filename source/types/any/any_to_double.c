/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_to_double.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:02:04 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/25 19:15:58 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

double	any_to_double(t_any instance)
{
	double	value;

	value = instance->value.cdouble;
	any_destroy(instance);
	return (value);
}
