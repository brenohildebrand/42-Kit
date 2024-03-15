/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 03:00:55 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/15 03:03:08 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
# define MEMORY_H

void	*allocate(unsigned int size);
void	deallocate(void *address);

# ifdef FRAMEWORK
# endif

#endif