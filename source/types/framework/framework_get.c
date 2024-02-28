/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   framework_get.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:02:07 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 13:41:02 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "framework.h"

t_framework	framework_get(void)
{
	static struct s_framework	framework = {
		.memtree = NULL,
		.map = NULL,
	};

	if (framework.map == NULL)
	{
		framework.map = map_create();
	}
	return (&framework);
}
