/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_in_range_with_data.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 03:11:40 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 03:13:06 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Calls the given callback function for each integer from start to end,
 * incrementing by step. Passes the current integer value and the given
 * data pointer to each callback invocation. Handles negative step to
 * iterate backwards if start > end.
 * 
 * @param start The starting integer.
 * @param end The ending integer.
 * @param callback The callback function to call for each integer from start to
 * 				   end.
 * @param data User data to pass to the callback function.
 */
void call_in_range_with_data(
	t_i32 start,
	t_i32 end, void (*callback)(t_i32, void *),
	void *data)
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
		callback(start, data);
		start += step;
	}
}
