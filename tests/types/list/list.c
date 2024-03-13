/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:25:18 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/13 16:46:37 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_i32	main(void)
{
	t_type	list_type;

	list_type = list();
	assert(list_type->size == sizeof(struct s_list));
	assert(list_type->is_instance == TRUE);
	assert(list_type->is_sequence == FALSE);
	assert(list_type->is_value == FALSE); 
	assert(list_type->create == (void *(*)(void))list_create);
	assert(list_type->destroy == (void (*)(void *))list_destroy);
	assert(list_type->copy == (void *(*)(void *))list_copy);
	assert(list_type->get == (t_any (*)(void *, t_any))list_get);
	assert(list_type->set == (void (*)(void *, t_any, t_any))list_set);
	assert(list_type->push == (void (*)(void *, t_any))list_push);
	assert(list_type->pop == (t_any (*)(void *))list_pop);
	assert(list_type->unshift == list_unshift);
	assert(list_type->shift == list_shift);
	assert(list_type->rotate == list_rotate);
	assert(list_type->reverse_rotate == list_reverse_rotate);
	assert(list_type->swap == list_swap);
	assert(list_type->print == list_print);
	assert(list_type->for_each == list_for_each);
	assert(list_type->reduce == list_reduce);
	assert(list_type->sort == list_sort);
	assert(list_type->get_length == list_get_length);
	assert(list_type->is_sorted == list_is_sorted);
	assert(list_type->to_any == list_to_any);
	return (0);
}
