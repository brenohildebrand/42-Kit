/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 01:08:19 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 02:44:26 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "loop.h"

void	loop(int start, int end, void (*callback)(void))
{
	while (start <= end)
	{
		callback();
		start++;
	}
}

// loop

// map
// filter
// reduce
// foreach
// take
// drop
// zip

// copy (deep copy)
// destructible (if you want a non-destructible just work with a copy)