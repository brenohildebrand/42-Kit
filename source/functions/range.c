/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:09:06 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 12:56:22 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	range(int start, int end, void (*callback)(int))
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
