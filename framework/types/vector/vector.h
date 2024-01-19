/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 22:41:19 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/18 22:43:41 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

# include "typetree.h"
# include "typemap.h"

typedef struct s_vector	*t_vector;

struct s_vector {
	unsigned int	size;
	unsigned int	length;
	t_any			*any;
};

vector_create()

#endif