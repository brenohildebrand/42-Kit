/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 22:41:19 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/09 22:22:07 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// -- Vector
// -- Represents a dynamic array for any type.

#ifndef VECTOR_H
# define VECTOR_H

// -- Dependencies
// -- None

// -- Definition
typedef struct s_vector	*t_vector;

struct s_vector {
	t_any			*content;
	unsigned int	start;
	unsigned int	end;
	unsigned int	length;
	unsigned int	max_length;
};

// -- Create/Destroy
t_vector	vector_create(void);
void		vector_destroy(t_vector vector);

// -- Get/Set
t_any		vector_get(t_vector vector, unsigned int index);
void		vector_set(t_vector vector, unsigned int index, t_any value);

// -- Operations
void		vector_push(t_vector vector, t_any value);
t_any		vector_pop(t_vector vector);
void		vector_unshift(t_vector vector, t_any value);
t_any		vector_shift(t_vector vector);
void		vector_expand(t_vector vector);
void		vector_reverse(t_vector vector);

#endif