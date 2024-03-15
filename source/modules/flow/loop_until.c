/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_until.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:06:35 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/04 14:31:21 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

// -- loop while?
void	loop_until(t_i32 (*condition)(void), void (*callback)(void))
{
	while (condition())
	{
		callback();
	}
}
