/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:54:35 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 11:55:14 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_H
# define INTEGER_H

# include "kit.h"

typedef int	*t_integer;

t_typedata	integer(void);
t_integer	integer_create(void);
void		integer_init(t_integer integer, int value);
t_integer	integer_build(int value);
void		integer_destroy(t_integer integer);

#endif