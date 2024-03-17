/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 00:41:39 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 03:16:08 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTROL_H
# define CONTROL_H

#include "sys/types.h"

void	quit(t_i32 code);
void	assert(t_i32 condition);
t_i32	call_in_fork(void (*callback)(void));
t_i32	call_in_fork_with_data(void (*callback)(void *), void *data);
void	call_to_ensure(t_i32 condition, void (*callback)(void));
void	call_to_ensure_with_data(
			t_i32 condition,
			void (*callback)(void *),
			void *data);
void	call_if(t_i32 condition, void (*callback)(void));
void	call_if_with_data(
			t_i32 condition,
			void (*callback)(void *),
			void *data);
void	call_in_range(t_i32 start, t_i32 end, void (*callback)(t_i32));
void	call_in_range_with_data(
			t_i32 start,
			t_i32 end,
			void (*callback)(t_i32, void *),
			void *data);
void	call_until(t_i32 (*condition)(void), void (*callback)(void));
void	call_until_with_data(
			t_i32 (*condition)(void *),
			void *condition_data,
			void (*callback)(void *),
			void *callback_data);
void	call_forever(void (*callback)(void));
void	call_forever_with_data(void (*callback)(void *), void *data);

#endif