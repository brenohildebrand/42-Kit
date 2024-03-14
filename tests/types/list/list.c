/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:25:18 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/13 20:03:12 by bhildebr         ###   ########.fr       */
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
	assert(list_type->create == (t_create)list_create);
	assert(list_type->destroy == (t_destroy)list_destroy);
	assert(list_type->copy == (t_copy)list_copy);
	assert(list_type->compare == (t_compare)list_compare);
	assert(list_type->get == (t_get)list_get);
	assert(list_type->set == (t_set)list_set);
	assert(list_type->push == (t_push)list_push);
	assert(list_type->pop == (t_pop)list_pop);
	assert(list_type->unshift == (t_unshift)list_unshift);
	assert(list_type->shift == (t_shift)list_shift);
	assert(list_type->rotate == (t_rotate)list_rotate);
	assert(list_type->reverse_rotate == (t_reverse_rotate)list_reverse_rotate);
	assert(list_type->swap == (t_swap)list_swap);
	assert(list_type->print == (t_print)list_print);
	assert(list_type->for_each == (t_for_each)list_for_each);
	assert(list_type->reduce == (t_reduce)list_reduce);
	assert(list_type->sort == (t_sort)list_sort);
	assert(list_type->get_length == (t_get_length)list_get_length);
	assert(list_type->is_sorted == (t_is_sorted)list_is_sorted);
	assert(list_type->to_any == (t_to_any)list_to_any);
	return (0);
}
