/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_everything_from_b_to_a.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:50:27 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/24 17:50:53 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "turk.h"

void	push_everything_from_b_to_a(t_stack a, t_stack b)
{
	while (stack_get_height(b) > 0)
	stack_push(a, stack_pop(b));
}
