/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kit.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 01:17:03 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 01:59:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KIT_H
# define KIT_H

# include "typetree.h"
# include "typemap.h"

# include <stdlib.h>

typedef void	*t_any;

t_any	new(t_typedata (*type)(void));
void	delete(t_any address);

#endif