/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 22:41:19 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 10:46:53 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

# include "kit.h"

typedef struct s_vector	*t_vector;

struct s_vector {
	t_any			*content;
	unsigned int	length;
	unsigned int	max_length;
};


t_typedata	vector(void);
t_vector	vector_create(void);
void		vector_destroy(t_vector vector);
void		vector_init(t_vector vector);
void		vector_push(t_vector vector, t_any value);
void		vector_pop(t_vector vector);
void		vector_expand(t_vector vector);
// void		vector_get(t_vector vector, unsigned int index);
// void		vector_set(t_vector vector, unsigned int index);
// void		vector_get_length(t_vector vector);

#endif