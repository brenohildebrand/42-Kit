/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   share.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:36:17 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/29 18:51:46 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "framework.h"

void	share(t_i8 *key, t_any value)
{
	t_map	map;

	map = framework_get_map();
	map_set(map, i8_sequence_to_any(key), value);
}
