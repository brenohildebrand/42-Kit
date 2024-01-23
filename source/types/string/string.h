/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 20:35:01 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/22 21:59:51 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

# include "typekit.h"

typedef struct s_string	*t_string;

struct s_string {
	char			*content;
	unsigned int	length;
	unsigned int	max_length;
};

t_typedata	string(void);
t_string	string_create(void);
void		string_init(t_string string, char *value);
t_string	string_build(char *value);
void		string_destroy(t_string string);

#endif