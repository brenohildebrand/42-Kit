/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typekit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 01:17:03 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 23:04:04 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPEKIT_H
# define TYPEKIT_H

# include "typetree.h"

# include <stdlib.h>

typedef void	*t_any;

t_any	allocate(t_typesize size);
void	deallocate(t_any address);

t_any	new(t_typedata (*type)(void));
void	delete(t_any address);
t_any	copy(t_any address);

t_any	create(t_typedata (*type)(void));
void	destroy(t_any address);

#endif