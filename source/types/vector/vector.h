/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 22:41:19 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/06 16:04:04 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// -- Vector
// -- Represents a dynamic array.

#ifndef VECTOR_H
# define VECTOR_H

// -- Dependencies
# include "framework.h"

// -- 			Definition
typedef struct s_vector	*t_vector;

struct s_vector {
	t_any			*content;
	unsigned int	length;
	unsigned int	max_length;
};


// -- Identity
t_typedata	vector(void);

// -- Lifecycle
t_vector	vector_create(void);
void		vector_init(t_vector vector);
t_vector	vector_build(void);
void		vector_destroy(t_vector vector);

// -- Getters
t_any		*vector_get_content(t_vector vector);
t_u32		vector_get_length(t_vector vector);
t_u32		vector_get_max_length(t_vector vector);

// -- Setters

// -- Iterators
// -- (index)
t_any		vector_get(t_vector vector, t_u32 index);
t_any		vector_set(t_vector vector, t_u32 index, t_any value);
// -- (cursor)
t_any		vector_start(t_vector vector);
t_any		vector_next(t_vector vector);
t_any		vector_previous(t_vector vector);
t_any		vector_end(t_vector vector);
// -- (callback)
void		vector_iterate(
				t_vector vector,
				void (*callback)(t_any, t_any),
				t_any argument);

// -- Custom
void		vector_push(t_vector vector, t_any value);
void		vector_pop(t_vector vector);
void		vector_expand(t_vector vector);
void		vector_reverse(t_vector vector);

#endif