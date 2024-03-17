/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global_map_get_address.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 14:37:25 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 14:37:58 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "global_map.h"

t_map	*global_map_get_address(void)
{
	static t_map	global_map = NULL;

	return (&global_map);
}
