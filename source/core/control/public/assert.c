/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 23:52:09 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 02:55:53 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "control.h"

/**
 * Asserts that the given condition is true.
 * If the condition is false, this function will quit the program with exit code 1.
 * 
 * @param condition The condition to assert.
 */
void assert(t_i32 condition)
{
	if (condition == FALSE)
	{
		quit(1);
	}
}
