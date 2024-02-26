/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_to_llint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:00:24 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/25 19:18:58 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

long long int	any_to_llint(t_any instance)
{
	long long int	value;

	value = instance->value.cllint;
	any_destroy(instance);
	return (value);
}
