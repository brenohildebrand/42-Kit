/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_get.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:03:31 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/13 20:40:16 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_i32	main(void)
{
	t_list	instance;
	
	instance = create(list);
	assert(get(instance, i32_to_any(42)) == NULL);
	set(instance, i32_to_any(42), i32_to_any(42));
	assert(any_as_i32(get(instance, i32_to_any(42))) == 42);
	assert(any_as_i32(get(instance, i32_to_any(-1))) == 42);
	destroy(instance);
	return (0);
}
