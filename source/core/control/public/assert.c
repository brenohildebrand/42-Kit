/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 23:52:09 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/18 15:55:48 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "control.h"

/**
 * Asserts that the given condition is true. If the condition is false, this 
 * function will quit the program with exit code 1 and print the message given.
 * 
 * @param condition The condition to assert.
 * @param message The message to print if the condition is false.
 */
void assert(t_i32 condition, t_i8 *message)
{
	if (condition == FALSE)
	{
		console(message);
		quit(1);
	}
}
