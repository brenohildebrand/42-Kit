/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   framework_get.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:02:07 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/01 18:00:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "framework.h"

t_framework	framework_get(void)
{
	static struct s_framework	framework = {
		.memtree = NULL,
		.map = NULL,
	};

	return (&framework);
}
