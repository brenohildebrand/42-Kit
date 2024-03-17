/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_pop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 22:29:02 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/13 23:24:46 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_i32	main(void)
{
	t_list	instance;
	
	instance = create(list);
	list_push(instance, i32_to_any(1));
	list_push(instance, i32_to_any(2));
	list_push(instance, i32_to_any(3));
	assert(any_to_i32(list_pop(instance)) == 3);
	assert(any_to_i32(list_pop(instance)) == 2);
	assert(any_to_i32(list_pop(instance)) == 1);
	assert(list_pop(instance) == NULL);
	destroy(instance);
	return (0);	
}
