/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_get.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:51:15 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 18:35:35 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	string_get(t_string instance, t_any key)
{
	if (key->value.cint >= instance->length)
		return (0);
	return (instance->content[key->value.cint]);
}
