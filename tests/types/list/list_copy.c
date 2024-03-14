/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:22:10 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/13 17:24:57 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_i32	main(void)
{
	t_list	instance;
	t_list	the_copy_instance;

	instance = create(list);
	the_copy_instance = copy(instance);
	assert(compare(instance, the_copy_instance) == 0);
	destroy(instance);
	destroy(the_copy_instance);

	instance = create(list);
	for (t_i32 i = 0; i < 100; i++)
		push(instance, i32_to_any(i));
	the_copy_instance = copy(instance);
	assert(compare(instance, the_copy_instance) == 0);
	destroy(instance);
	destroy(the_copy_instance);
	return (0);
}
