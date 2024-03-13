/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 02:09:13 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/13 16:59:11 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_H
# define TYPE_H

# include "i8.h"
# include "u8.h"
# include "i32.h"
# include "u32.h"
# include "i64.h"
# include "u64.h"
# include "f64.h"

typedef struct s_type	*t_type;

typedef void	*(*t_create)(void);
typedef void	(*t_destroy)(void *);
typedef void	*(*t_copy)(void *);
typedef t_any	(*t_get)(void *, t_any);
typedef void	(*t_set)(void *, t_any, t_any);
typedef void	(*t_push)(void *, t_any);
typedef t_any	(*t_pop)(void *);
typedef void	(*t_unshift)(void *, t_any);
typedef t_any	(*t_shift)(void *);
typedef void	(*t_rotate)(void *);
typedef void	(*t_reverse_rotate)(void *);
typedef void	(*t_swap)(void *);
typedef void	(*t_for_each)(void *, void (*)(t_any, t_i32));
typedef void	(*t_filter)(void *, void (*)(t_any, t_i32));
typedef t_any	(*t_reduce)(void *, t_any accumulator, t_any (*)(t_any, t_any, t_i32));
typedef int		(*t_find)(void *, int (*)(t_any, t_i32));
typedef void	(*t_slice)(void *, t_i32, t_i32);
typedef int		(*t_compare)(t_any, t_any);
typedef void	(*t_sort)(void *);
typedef void	(*t_print)(void *);
typedef t_i32	(*t_is_sorted)(void *);
typedef t_i32	(*t_get_length)(void *);
typedef t_i8	(*t_to_i8)(t_any);
typedef t_u8	(*t_to_u8)(t_any);
typedef t_i32	(*t_to_i32)(t_any);
typedef t_u32	(*t_to_u32)(t_any);
typedef t_i64	(*t_to_i64)(t_any);
typedef t_u64	(*t_to_u64)(t_any);
typedef t_f64	(*t_to_f64)(t_any);
typedef t_any	(*t_to_any)(void *);
typedef t_any	(*t_as_any)(void *);

struct s_type {
	t_i8				*name;
	t_u32				size;
	t_i32				is_value;
	t_i32				is_sequence;
	t_i32				is_instance;
	t_create			create;
	t_destroy			destroy;
	t_copy				copy;
	t_get				get;
	t_set				set;
	t_push				push;
	t_pop				pop;
	t_unshift			unshift;
	t_shift				shift;
	t_rotate			rotate;
	t_reverse_rotate	reverse_rotate;
	t_swap				swap;
	t_for_each			for_each;
	t_filter			filter;
	t_reduce			reduce;
	t_find				find;
	t_slice				slice;
	t_compare			compare;
	t_sort				sort;
	t_print				print;
	t_get_length		get_length;
	t_to_i8				to_i8;
	t_to_u8				to_u8;
	t_to_i32			to_i32;
	t_to_u32			to_u32;
	t_to_i64			to_i64;
	t_to_u64			to_u64;
	t_to_f64			to_f64;
	t_to_any			to_any;
};

#endif