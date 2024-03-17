/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_forever_with_data.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 03:17:55 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 03:18:24 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Calls the given callback function forever, passing the given data
 * pointer as an argument each time. This creates an infinite loop.
 * 
 * @param callback The callback function to call.
 */
void call_forever_with_data(void (*callback)(void *), void *data)
{
	while (1)
	{
		callback(data);
	}
}
