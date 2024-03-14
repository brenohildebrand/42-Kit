/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 01:11:19 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/13 17:43:34 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include "i8.h"
# include "u8.h"
# include "i32.h"
# include "u32.h"
# include "i64.h"
# include "u64.h"

# include <sys/types.h>
# include <sys/wait.h>
# include <stdlib.h>
# include <unistd.h>

void	*allocate(int size);
void	assert(int condition);
void	call_if(int condition, void (*callback)(void));
t_i32	compare(void *instance, void *another_instance);
void	conceal(t_i8 *key);
void	*copy(void	*instance);
void	*create(t_type (*signature)(void));
void	deallocate(void *pointer);
void	debug(char *cstring);
void	delete(void *instance);
void	destroy(void *instance);
void	display(char *cstring);
void	error(char *cstring);
void	for_each(void *instance, void (*callback)(t_any, int));
int		forkrun(void (*callback)(void));
t_i32	get_length(void *instance);
t_any	get(void *instance, t_any key);
void	*new(t_type (*signature)(void));
t_any	pop(void *instance);
void	print(t_any instance);
void	push(void *instance, t_any value);
void	quit(t_i32 exit_code);
t_any	reduce(void *instance, t_any accumulator, t_any (*callback)(t_any, t_any, int));
t_i32	is_sorted(void *instance);
void	loop_in_range(int start, int end, void (*callback)(int));
void	repeat(int n, void (*callback)(void));
// t_any	retrieve(t_i8 *key);
void	reverse_rotate(void *instance);
void	rotate(void *instance);
void	set(void *instance, t_any key, t_any value);
// void	share(t_i8 *key, t_any value);
void	sort(void *instance);
void	swap(void *instance);
t_any	to_any(void *instance);
void	warning(char *cstring);

#endif