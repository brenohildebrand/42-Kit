/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 23:59:12 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/14 00:09:08 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_i32	main(void)
{
	t_list	instance;

	instance = create(list);
	push(instance, i32_to_any(1));
	push(instance, i32_to_any(2));
	push(instance, i32_to_any(3));
	swap(instance, i32_to_any(0), i32_to_any(-1));
	assert(any_to_i32(shift(instance)) == 3);
	assert(any_to_i32(pop(instance)) == 1);
	destroy(instance);
	return (0);
}
