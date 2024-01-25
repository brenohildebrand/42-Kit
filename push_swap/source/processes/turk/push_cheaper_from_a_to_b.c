/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cheaper_from_a_to_b.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:56:21 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/24 18:35:47 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "turk.h"

#define A 0
#define B 1

int	calculate_price(
	t_stack a, 
	t_stack b, 
	int i, 
	int j
){
	int	prices[4];
	int	distances[2];
	int	reverse_distances[2];

	distance[0] = stack_get_height(a) - i;
	distance[1] = stack_get_height(b) - j;
	reverse_distances[0] = i;
	reverse_distances[1] = j;

	// rotate A, rotate B
	price[0] = min(distance[0], distance[1]) + abs(distance[0] - distance[1]) + 1;

	// rotate A, reverse rotate B
	price[1] = distance[0] + reverse_distances[1] + 1;

	// reverse rotate A, rotate B
	price[2] = reverse_distances[0] + distances[1] + 1;

	// reverse rotate A, reverse rotate B
	price[3] = reverse_distances[0] + reverse_distances[b] + 1;

	return (min(prices[0], prices[1], prices[2], prices[3]));
}

void	push_from_a_to_b_given_indexes(
	t_stack a,
	t_stack b,
	int i,
	int j	
){
	
}

void	push_cheaper_from_a_to_b(t_stack a, t_stack b)
{
	int	current_price;
	int	min_price;
	int	counters[2];
	int	distances[2];
	int	indexes[2];

	min_price = -1;
	counter[A] = 0;
	while (counter[A] < stack_get_height(a))
	{
		counter[B] = 0;
		while (counter[B] < stack_get_height(b))
		{
			if (stack_peek(b))
			counter[B]++;
		}
		indexes[A] = counter[A];
		current_price = calculate_price(a, b, indexes);
		if (min_price == -1 || min_price > price)
		{
			min_price = price;
			indexes[0] = i;
			indexes[1] = j;
		}
		i++;
	}
	push_from_a_to_b_given_indexes(a, b, indexes[0], indexes[1]);
}