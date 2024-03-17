/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ensure.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:10:57 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 03:02:13 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Calls the provided callback function if the given condition evaluates to 
 * false. This allows ensuring some action is taken when a condition is not 
 * met.
 * 
 * @param condition The condition to evaluate.
 * @param callback The callback function to call if the condition is false.
 */
void call_to_ensure(t_i32 condition, void (*callback)(void))
{
	if (!condition)
	{
		callback();
	}
}
