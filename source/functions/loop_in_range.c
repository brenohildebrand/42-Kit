/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_in_range.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:09:06 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/04 13:44:15 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	loop_in_range(int start, int end, void (*callback)(int))
{
	int	step;

	if (start > end)
		step = -1;
	else
		step = 1;
	while (start != end)
	{
		callback(start);
		start += step;
	}
}
