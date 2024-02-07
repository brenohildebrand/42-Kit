/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 12:38:44 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/07 14:41:18 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INT_H
# define INT_H

typedef int	*t_int;

t_typedata	ft_int();

t_int		int_create(void);
t_int		int_destroy(t_int instance);
t_int		int_init(t_int instance, int value);
t_int		int_construct()

t_int		ft_int();

t_int		int_create(int value);
void		int_destroy(t_int instance);

t_int		int_add(t_int a, t_int b);
t_int		int_subtract(t_int a, t_int b);
t_int		int_multiply(t_int a, t_int b);
t_int		int_divide(t_int a, t_int b);
t_int		int_module(t_int a, t_int b);
t_int		int_min(t_int a, t_int b);
t_int		int_max(t_int a, t_int b);

#endif

// t_int
// t_uint
// t_char
// t_uchar
// t_lint
// t_luint
// t_llint
// t_lluint
// t_double
// t_void