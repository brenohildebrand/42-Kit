/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   framework.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 23:19:14 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/31 15:50:04 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAMEWORK_H
# define FRAMEWORK_H

# include "typetree.h"

# include <stdlib.h>
# include <unistd.h>

typedef char					t_i8;
typedef unsigned char			t_u8;

typedef int						t_i32;
typedef unsigned int			t_u32;

typedef long long int			t_i64;
typedef unsigned long long int	t_u64;

typedef double					t_f64;

t_any		allocate(t_typesize size);
void		deallocate(t_any address);

t_any		new(t_typedata (*type)(void));
void		delete(t_any address);
t_any		copy(t_any address);

t_any		create(t_typedata (*type)(void));
void		destroy(t_any address);

void		print(char *cstring);
void		debug(char *cstring);

#endif