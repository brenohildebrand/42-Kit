/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_to_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:11:42 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/25 19:17:41 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

char	any_to_char(t_any instance)
{
	char	value;

	value = instance->value.cchar;
	any_destroy(instance);
	return (value);
}
