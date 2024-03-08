/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_set.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:43:22 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/08 19:26:05 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	t_map	instance;

	instance = create(map);
	set(instance, i32_to_any(42), i32_to_any(1));
	assert(any_as_i32(get(instance, i32_to_any(42))) == 1);
	destroy(instance);

	instance = create(map);
	for (t_i32 i = 1; i <= 9; i++)
		set(instance, i32_to_any(i), i32_to_any(i * 2));
	for (t_i32 i = 1; i <= 9; i++)
		assert(any_as_i32(get(instance, i32_to_any(i))) == i * 2);
	destroy(instance);

	instance = create(map);
	for (t_i32 i = 1; i <= 100; i++)
		set(instance, i32_to_any(i), i32_to_any(i * 2));
	for (t_i32 i = 1; i <= 100; i++)
		assert(any_as_i32(get(instance, i32_to_any(i))) == i * 2);
	destroy(instance);
	return (0);
}
