/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getg.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:09:29 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 13:27:45 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "framework.h"

t_any	getg(t_any key)
{
	t_map	map;

	map = framework_get_map();
	return (map_get(map, key));
}
