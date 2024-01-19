/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typemap_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:44:24 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/17 13:22:03 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typemap.h"

t_typemap	typemap_get(void)
{
	static char				should_initialize = 1;
	static struct s_typemap	typemap;
	unsigned int			i;

	if (should_initialize)
	{
		i = 0;
		while (i < TYPEMAP_MAX_ENTRIES)
		{
			typemap.entries[i] = (struct s_typemapentry){
				.key = 0,
				.value = 0,
			};
			i++;
		}
		should_initialize = 0;
	}
	return (&typemap);
}
