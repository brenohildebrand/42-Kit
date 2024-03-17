/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_reduce.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 12:04:23 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/10 12:48:49 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static t_any	sum(t_any accumulator, t_any current, t_i32 index)
{
	(void)index;
	return (i32_to_any(any_to_i32(accumulator) + any_as_i32(current)));
}

t_i32	main(void)
{
	t_list	instance;
	t_i32	result;

	instance = create(list);
	for (t_i32 i = 1; i <= 99; i++)
		push(instance, i32_to_any(i));
	result = any_to_i32(reduce(instance, i32_to_any(0), sum));
	assert(result == 4950);
	destroy(instance);
	return (0);
}
