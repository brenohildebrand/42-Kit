/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:35:01 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/08 16:10:34 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// -- String
// -- Represents a sequence of characters. Does not end with '\0'. 

#ifndef STRING_H
# define STRING_H

// -- Dependencies
# include "character.h"
# include "vector.h"

// -- Definition
typedef struct s_string	*t_string;

struct s_string {
	t_vector	content;
};

// -- Create/Destroy
t_string	string_create(char *cstring);
void		string_destroy(t_string string);

// -- Operations

#endif