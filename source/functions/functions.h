/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 01:11:19 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 01:53:35 by bhildebr         ###   ########.fr       */
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
void	*new(t_type type)
void	print(char *cstring);
void	warning(char *cstring);

#endif