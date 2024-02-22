/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 01:11:19 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 18:18:12 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include <stdlib.h>
# include <unistd.h>

void	*allocate(unsigned int size);
void	assert(int condition);
void	*create(t_type (*signature)(void));
void	deallocate(void *pointer);
void	debug(char *cstring);
void	delete(void *instance);
void	destroy(void *instance);
void	error(char *cstring);
void	*new(t_type type);
void	print(char *cstring);
void	push(void	*instance, t_any value);
void	range(int start, int end, void (*callback)(int));
void	repeat(int n, void (*callback)(void));
void	warning(char *cstring);

// repeat(pa, 10);
// range(-42, 42, action);

// map
// filter
// reduce
// foreach
// take
// drop
// zip

// copy (deep copy)
// destructible (if you want a non-destructible just work with a copy)

// init

#endif