/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:35:01 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/01 13:34:11 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// -- String
// -- Represents a sequence of characters. Does not end with '\0'. 

#ifndef STRING_H
# define STRING_H

// -- Dependencies
# include "framework.h"

// -- Type Definition
typedef struct s_string	*t_string;

struct s_string {
	t_u8	*content;
	t_u32	length;
	t_u32	max_length;
};

// -- Type Functions
// -- Signature
t_typedata	string(void);

// -- Lifecycle
t_string	string_create(void);
void		string_init(t_string string, t_u8 *value);
t_string	string_build(t_u8 *value);
void		string_destroy(t_string string);

// -- Getters
t_u8		*string_get_content(t_string string);
t_u32		string_get_length(t_string string);
t_u32		string_get_max_length(t_string string);

// -- Iterators
t_u8		string_get_at(int index);
void		string_set_at(int index, t_u8 value);
t_u8		string_start(t_string string);
t_u8		string_next(t_string string);
t_u8		string_previous(t_string string);
t_u8		string_end(t_string string);
void		string_iterate(t_string string, void (*callback)(t_u8, t_any), t_any argument);

// -- Custom
void		string_print(t_string string);

#endif