/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_create.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 16:03:04 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/13 17:22:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_i32	main(void)
{
	t_list	instance;

	instance = create(list);
	assert(instance->capacity == LIST_INITIAL_CAPACITY);
	assert(instance->content != NULL);
	assert(instance->start == LIST_INITIAL_CAPACITY / 2);
	assert(instance->end == instance->start - 1);
	assert(instance->length == 0);
	assert(instance->size == 0);
	destroy(instance);
	return (0);
}
