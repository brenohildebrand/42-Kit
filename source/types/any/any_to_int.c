/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_to_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 02:37:41 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/25 19:18:32 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

int	any_to_int(t_any instance)
{
	int	value;

	value = instance->value.cint;
	any_destroy(instance);
	return (value);
}
