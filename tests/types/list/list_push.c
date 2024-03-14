/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 16:25:11 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/13 22:12:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_i32	main(void)
{
	t_list	instance;

	instance = create(list);
	push(instance, i32_to_any(42));
	push(instance, i8_sequence_to_any("the answer"));
	push(instance, i64_to_any(42LL));
	push(instance, f64_to_any(0.2));
	assert(any_as_f64(get(instance, i32_to_any(-1))) == 0.2);
	assert(any_as_i64(get(instance, i32_to_any(-2))) == 42LL);
	assert(any_as_i32(get(instance, i32_to_any(0))) == 42);
	destroy(instance);
}
