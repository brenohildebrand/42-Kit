/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   framework.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 23:19:14 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/30 16:41:18 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAMEWORK_H
# define FRAMEWORK_H

# include "typetree.h"

# include <stdlib.h>
# include <unistd.h>

t_any		allocate(t_typesize size);
void		deallocate(t_any address);

t_any		new(t_typedata (*type)(void));
void		delete(t_any address);
t_any		copy(t_any address);

t_any		create(t_typedata (*type)(void));
void		destroy(t_any address);

void		print(char *cstring);

#endif