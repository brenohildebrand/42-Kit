/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 02:09:13 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 21:03:58 by bhildebr         ###   ########.fr       */
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

struct s_type {
	t_cstring		name;
	t_u32			size;
	t_i32			is_literal;
	void			*(*create)(void);
	void			(*destroy)(void *);
	void			*(*init)(void *, t_any);
	void			*(*copy)(void *);
	t_any			(*get)(void *, t_any);
	void			(*set)(void *, t_any, t_any);
	void			(*push)(void *, t_any);
	t_any			(*pop)(void *);
	void			(*unshift)(void *, t_any);
	t_any			(*shift)(void *);
	void			(*foreach)(void *, void (*)(t_any, t_i32));
	void			(*filter)(void *, void (*)(t_any, t_i32));
	t_any			(*reduce)(void *, t_any (*)(t_any, t_any, t_i32));
	int				(*find)(void *, int (*)(t_any, t_i32));
	void			(*slice)(void *, t_i32, t_i32);
	int				(*compare)(t_any, t_any);
	void			(*print)(t_any);
	t_i8			(*to_i8)(t_any);
	t_u8			(*to_u8)(t_any);
	t_i32			(*to_i32)(t_any);
	t_u32			(*to_u32)(t_any);
	t_i64			(*to_i64)(t_any);
	t_u64			(*to_u64)(t_any);
	t_f64			(*to_f64)(t_any);
};

#endif