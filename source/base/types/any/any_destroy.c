/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_destroy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:42:45 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/07 20:47:19 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

void	any_destroy(t_any instance)
{
	t_type	type;

	type = trillian_search(instance);
	if (type == NULL)
	{
		trillian_delete(instance);
	}
	else
	{
		type->destroy(address);		
	}
}
