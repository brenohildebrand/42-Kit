/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:57:01 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 13:38:21 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANY_H
# define ANY_H

# include "i8.h"
# include "u8.h"
# include "i32.h"
# include "u32.h"
# include "i64.h"
# include "u64.h"
# include "f64.h"

typedef struct s_any	*t_any;

union u_any {
	t_i8	i8;
	t_u8	u8;
	t_i32	i32;
	t_u32	u32;
	t_i64	i64;
	t_u64	u64;
	t_f64	f64;
	char	*cstring;
	void	*instance;
};

struct s_any {
	t_type		type;
	union u_any	value;
};

t_type			any(void);
t_any			any_create(void);
void			any_destroy(t_any instance);
t_any			any_copy(t_any instance);
t_i8			any_to_i8(t_any instance);
t_u8			any_to_u8(t_any instance);
t_i32			any_to_i32(t_any instance);
t_u32			any_to_u32(t_any instance);
t_i64			any_to_i64(t_any instance);
t_u64			any_to_u64(t_any instance);
t_f64			any_to_f64(t_any instance);
char			*any_to_cstring(t_any instance);
void			*any_to_instance(t_any instance);

#endif