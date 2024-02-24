/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:35:01 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 23:42:47 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// -- String
// -- Represents a sequence of characters. Does not end with '\0'. 

#ifndef STRING_H
# define STRING_H

typedef struct s_string	*t_string;

struct s_string {
	char	*content;
	int		length;
	int		max_length;
};

t_type		string(void);
t_string	string_create(void);
void		string_destroy(t_string instance);
t_string	string_copy(t_string instance);
// t_string	string_init(t_string instance, t_any value);
// t_any		string_get(t_string instance, t_any index);
// void		string_set(t_string string, t_any index, t_any value);
// int			string_is_cint(t_string string);
// t_integer	string_to_cint(t_string string);
// t_any		string_to_any(t_string instance);

#endif