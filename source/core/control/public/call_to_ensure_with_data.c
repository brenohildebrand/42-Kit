/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_to_ensure_with_data.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 03:02:35 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 03:03:18 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Calls the provided callback function if the given condition evaluates to 
 * false.
 *
 * @param condition The condition to check.
 * @param callback The callback function to call if the condition is false.
 * @param data User data to pass to the callback function.
 */
void call_to_ensure_with_data(
	t_i32 condition,
	void (*callback)(void *),
	void *data)
{
	if (!condition)
	{
		callback(data);
	}
}
