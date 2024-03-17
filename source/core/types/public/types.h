/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 02:09:13 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 01:06:46 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# define TRUE (1)
# define FALSE (0)

typedef struct s_any	*t_any;
struct					s_any;

typedef	void					(*t_callback)(void *);

typedef unsigned char			t_u8;
typedef char					t_i8;

typedef unsigned int			t_u32;
typedef int						t_i32;

typedef unsigned long long int	t_u64;
typedef long long int			t_i64;

typedef double					t_f64;

typedef struct s_string			*t_string;
struct							s_string;

typedef struct s_chain			*t_chain;
struct							s_chain;

typedef struct s_list			*t_list;
struct							s_list;

typedef struct s_map			*t_map;
struct							s_map;

typedef struct s_set			*t_set;
struct							s_set;

typedef t_any					*t_tuple;

typedef struct s_type			*t_type;

typedef void					*(*t_create)(void);
typedef void					(*t_destroy)(void *);
typedef void					*(*t_copy)(void *);
typedef t_any					(*t_get)(void *, t_any);
typedef void					(*t_set)(void *, t_any, t_any);
typedef void					(*t_push)(void *, t_any);
typedef t_any					(*t_pop)(void *);
typedef void					(*t_unshift)(void *, t_any);
typedef t_any					(*t_shift)(void *);
typedef void					(*t_rotate)(void *);
typedef void					(*t_reverse_rotate)(void *);
typedef void					(*t_swap)(void *, t_any, t_any);
typedef void					(*t_for_each)(void *, void (*)(t_any, t_i32));
typedef void					(*t_filter)(void *, void (*)(t_any, t_i32));
typedef t_any					(*t_reduce)(
									void *,
									t_any accumulator,
									t_any (*)(t_any, t_any, t_i32));
typedef int						(*t_find)(void *, int (*)(t_any, t_i32));
typedef void					(*t_slice)(void *, t_i32, t_i32);
typedef int						(*t_compare)(void *, void *);
typedef void					(*t_sort)(void *);
typedef void					(*t_print)(void *);
typedef t_i32					(*t_is_sorted)(void *);
typedef t_i32					(*t_get_length)(void *);
typedef t_i8					(*t_to_i8)(t_any);
typedef t_u8					(*t_to_u8)(t_any);
typedef t_i32					(*t_to_i32)(t_any);
typedef t_u32					(*t_to_u32)(t_any);
typedef t_i64					(*t_to_i64)(t_any);
typedef t_u64					(*t_to_u64)(t_any);
typedef t_f64					(*t_to_f64)(t_any);
typedef t_any					(*t_to_any)(void *);
typedef t_any					(*t_as_any)(void *);

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
	t_is_sorted			is_sorted;
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

t_type	u8(void);
t_type	i8(void);
t_type	u32(void);
t_type	i32(void);
t_type	u64(void);
t_type	i64(void);
t_type	f64(void);
t_type	chain(void);
t_type	list(void);
t_type	map(void);
t_type	set(void);
t_type	tuple(void);

t_i32	compare(void *instance, void *another_instance);
void	*copy(void *instance);
void	*create(t_type (*signature)(void));
void	delete(void *instance);
void	destroy(void *instance);
void	filter(void *instance, void (*callback)(t_any, int));
t_i32	find(void *instance, int (*callback)(t_any, int));
void	for_each(void *instance, void (*callback)(t_any, int));
t_i32	get_length(void *instance);
t_any	get(void *instance, t_any key);
t_i32	is_sorted(void *instance);
void	*new(t_type (*signature)(void));
t_any	pop(void *instance);
void	print(t_any instance);
void	push(void *instance, t_any value);
void	reduce(
			void *instance,
			t_any accumulator,
			t_any (*callback)(t_any, t_any, int));
void	reverse_rotate(void *instance);
void	rotate(void *instance);
void	set(void *instance, t_any key, t_any value);
void	shift(void *instance);
void	slice(void *instance, t_i32 start, t_i32 end);
void	sort(void *instance);
void	swap(void *instance, t_any index_a, t_any index_b);
t_any	to_any(void *instance);
void	unshift(void *instance, t_any value);

#endif