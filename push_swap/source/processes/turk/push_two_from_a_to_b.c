/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_two_from_a_to_b.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:47:41 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/24 17:48:18 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "turk.h"

void	push_two_from_a_to_b(t_stack a, t_stack b)
{
	stack_push(b, stack_pop(a));
	stack_push(b, stack_pop(a));
}