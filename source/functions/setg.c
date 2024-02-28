/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setg.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:36:17 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 13:28:20 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "framework.h"

void	setg(t_any key, t_any value)
{
	t_map	map;

	map = framework_get_map();
	map_set(map, key, value);
}
