/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_to_cstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:01:05 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/25 19:17:38 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

char	*any_to_cstring(t_any instance)
{
	char	*cstring;

	cstring = instance->value.cstring;
	any_destroy(instance);
	return (cstring);
}
