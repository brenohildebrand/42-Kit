/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i8.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:21:37 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 20:42:21 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I8_H
# define I8_H

#include "i32.h"

typedef char	t_i8;

t_type	i8(void);
t_i32	i8_is_digit(t_i8 value);
t_i32	i8_is_space(t_i8 value);
t_i32	i8_is_signal(t_i8 value);
t_any	i8_to_any(t_i8 value);

#endif