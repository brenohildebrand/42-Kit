/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 01:11:19 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/29 15:44:00 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include "i32.h"

# include <sys/types.h>
# include <sys/wait.h>
# include <stdlib.h>
# include <unistd.h>

void	*allocate(int size);
void	assert(int condition);
void	*copy(void	*instance);
void	*create(t_type (*signature)(void));
void	deallocate(void *pointer);
void	debug(char *cstring);
void	delete(void *instance);
void	destroy(void *instance);
void	display(char *cstring);
void	error(char *cstring);
int		forkrun(void (*callback)(void));
void	*init(void	*instance, t_any value);
void	*new(t_type (*signature)(void));
void	print(t_any instance);
void	push(void	*instance, t_any value);
void	quit(t_i32 exit_code);
void	range(int start, int end, void (*callback)(int));
void	repeat(int n, void (*callback)(void));
t_any	retrieve(t_any key);
void	share(t_any key, t_any value);
void	warning(char *cstring);

#endif