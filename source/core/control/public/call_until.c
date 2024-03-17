/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_until.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:06:35 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 03:14:53 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Repeatedly calls the given callback function until the given condition
 * function returns false.
 *
 * @param condition A function that returns true while the callback should
 *                  continue being called.
 * @param callback  The function to call repeatedly.
 */
void call_until(t_i32 (*condition)(void), void (*callback)(void))
{
	while (condition())
	{
		callback();
	}
}
