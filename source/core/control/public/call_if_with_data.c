/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_if_with_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 02:59:41 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 03:00:17 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Calls the provided callback function if the given condition evaluates to true,
 * passing the specified data pointer as an argument.
 *
 * @param condition Condition to evaluate.
 * @param callback Callback function to call.
 * @param data Data pointer to pass to the callback.
 */
void call_if_with_data(t_i32 condition, void (*callback)(void *), void *data)
{
	if (condition)
	{
		callback(data);
	}
}
