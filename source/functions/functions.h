/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 01:11:19 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 19:08:21 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

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
void	error(char *cstring);
t_any	getg(t_any key);
void	*init(void	*instance, t_any value);
void	*new(t_type (*signature)(void));
void	print(char *cstring);
void	push(void	*instance, t_any value);
void	range(int start, int end, void (*callback)(int));
void	repeat(int n, void (*callback)(void));
void	setg(t_any key, t_any value);
void	warning(char *cstring);

#endif