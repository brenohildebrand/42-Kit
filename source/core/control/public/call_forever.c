/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_forever.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 03:17:08 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 03:17:34 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Calls the given callback function forever in an infinite loop.
 * This can be used to implement a simple event loop or background task.
 * 
 * @param callback The callback function to call.
 */
void call_forever(void (*callback)(void))
{
	while (1)
	{
		callback();
	}
}
