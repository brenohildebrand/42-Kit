/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_is_sorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:00:28 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/04 15:49:02 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_i32	main(void)
{
	t_list	instance;

	instance = create(list);
	push(instance, i32_to_any(42));
	push(instance, i32_to_any(52));
	push(instance, i32_to_any(67));
	assert(is_sorted(instance));
	list_destroy(instance);
	return (0);
}
