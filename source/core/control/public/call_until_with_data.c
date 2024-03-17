/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_until_with_data.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 03:15:11 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 03:16:55 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Repeatedly calls the callback function until the condition function returns 
 * false.
 *
 * @param condition A function that returns true while the callback should 
 * 					continue being called.
 * @param condition_data Data to pass to the condition function.
 * @param callback The function to call repeatedly.
 * @param callback_data Data to pass to the callback function.
 */
void call_until_with_data(
	t_i32 (*condition)(void *),
	void *condition_data,
	void (*callback)(void *),
	void *callback_data)
{
	while (condition(condition_data))
	{
		callback(callback_data);
	}
}
