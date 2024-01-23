/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 03:11:59 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/23 07:23:37 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	turk(t_stack a, t_stack b)
{
	if (stack_get_height(a) == 0)
		return ;
	if (stack_get_height(a) == 1)
		return ;
	if (stack_get_height(a) == 2)
	{
		// sort 2 in A
		return ;
	}
	if (stack_get_height(a) == 3)
	{
		// sort 3 in A
		return ;
	}
	

	stack_push(b, stack_pop(a));
	stack_push(b, stack_pop(a));

	while (stack_get_height(a) > 2)
	{
		// how to calculate
		// min(dA, dB) + abs(dA - dB) + 1
		// dA + dB + 1
		
		index = get_cheapest_index();
		put_index_on_top_of_A(index);
	}
	
	while (stack_get_height(b) > 0)
		stack_push(a, stack_pop(b));
}