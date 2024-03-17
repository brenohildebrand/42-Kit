/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_shift.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 23:52:20 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/13 23:52:30 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_i32	main(void)
{
	t_list	instance;

	instance = create(list);
	list_unshift(instance, i32_to_any(1));
	list_unshift(instance, i32_to_any(2));
	list_unshift(instance, i32_to_any(3));
	assert(any_to_i32(list_shift(instance)) == 3);
	assert(any_to_i32(list_shift(instance)) == 2);
	assert(any_to_i32(list_shift(instance)) == 1);
	assert(list_shift(instance) == NULL);
	destroy(instance);
	return (0);
}
