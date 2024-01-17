/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 23:51:37 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/17 11:46:39 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

typedef struct s_string		*t_string;
typedef struct s_character	*t_character;
typedef struct s_integer	*t_integer;

struct s_string {
	t_vector	content;
};

struct s_character {
	char	content;
};

struct s_integer {
	int	content;	
};

t_typedata	string_get_typedata(void);
t_typecode	string_get_typecode(void);

t_string	string_create(char *literal);

#endif