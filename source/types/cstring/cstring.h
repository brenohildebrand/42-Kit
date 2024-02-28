/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstring.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:08:42 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 20:18:27 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CSTRING_H
# define CSTRING_H

# include "i32.h"

typedef char	*t_cstring;

t_type	cstring(void);
t_any	cstring_to_any(t_cstring value);
t_i32	cstring_is_i32(t_cstring value);

#endif