/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 23:54:04 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/13 23:58:43 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_i32	main(void)
{
	t_list	instance;

	instance = create(list);
	list_push(instance, i32_to_any(1));
	list_push(instance, i32_to_any(2));
	list_push(instance, i32_to_any(3));
	list_rotate(instance);
	assert(any_to_i32(list_shift(instance)) == 3);
	assert(any_to_i32(list_pop(instance)) == 2);
	destroy(instance);
	
	instance = create(list);
	list_push(instance, i32_to_any(1));
	list_rotate(instance);
	destroy(instance);

	instance = create(list);
	list_rotate(instance);
	destroy(instance);
	return (0);
}
