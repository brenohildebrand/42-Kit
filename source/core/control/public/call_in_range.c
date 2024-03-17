/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_in_range.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:09:06 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 03:11:24 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Calls the given callback function on each integer from start to end,
 * incrementing or decrementing by step as appropriate.
 *
 * @param start The starting integer value to begin calling callback from.
 * @param end The ending integer value to stop calling callback at.
 * @param callback The callback function to call on each integer from start to 
 * 				   end.
 * @param step The value to increment or decrement by each loop iteration.
 *             Determined automatically based on start and end values.
 */
void call_in_range(t_i32 start, t_i32 end, void (*callback)(t_i32))
{
	t_i32 step;

	if (start > end)
	{
		step = -1;
	}
	else
	{
		step = 1;
	}
	while (start != end)
	{
		callback(start);
		start += step;
	}
}
