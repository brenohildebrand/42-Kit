/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tuple_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:49:33 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/11 21:37:50 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_i32	main(void)
{
	// t_tuple	instance;

	// instance = create(tuple);
	// init(instance, i32_to_any(3));
	// instance[0] = i32_to_any(42);
	// instance[1] = i8_sequence_to_any("The answer.");
	// instance[2] = NULL;
	// destroy(instance);
	t_tuple	instance;

	instance = create(tuple);
	set(tuple_get_map(), as_any(instance), i32_to_any(42));
	assert(any_as_i32(get(tuple_get_map(), as_any(instance))) == 42);
	delete(instance);
	map_destroy(tuple_get_map());
	return (0);
}
