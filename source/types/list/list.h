/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 11:57:33 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/12 12:05:32 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// -- List
// -- Represents a list of anything. Under the hood it's a dynamic arrray
// -- that can hold any type, including multiple different types.

#ifndef LIST_H
# define LIST_H

typedef struct s_list	*t_list;

struct s_list {
	t_any	*content;
	int		start;
	int		end;
	int		length;
	int		max_length;
};

t_type	list(void);
t_list	list_create(void);
void	list_destroy(t_list instance);
t_list	list_copy(t_list instance);
t_any	list_get(t_list instance, t_any key);
void	list_set(t_list instance, t_any key, t_any value);
void	list_push(t_list instance, t_any value);
t_any	list_pop(t_list instance);
void	list_unshift(t_list instance, t_any value);
t_any	list_shift(t_list instance);
void	list_expand(t_list instance);
void	list_resize(t_list instance);
void	list_inflate(t_list instance);
void	list_reverse(t_list instance);
void	list_rotate(t_list instance);
void	list_reverse_rotate(t_list instance);
void	list_swap(t_list instance);
void	list_for_each(t_list instance, void (*callback)(t_any, int));
t_any	list_reduce(t_list instance, t_any accumulator, t_any (*callback)(t_any, t_any, int));
void	list_sort(t_list instance);
// void	list_print(t_list instance);
int		list_get_length(t_list instance);
t_i32	list_is_sorted(t_list instance);
t_any	list_as_any(t_list instance);
t_any	list_to_any(t_list instance);

#endif