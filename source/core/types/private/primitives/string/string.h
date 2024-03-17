/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 09:16:00 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 00:29:16 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

typedef struct s_string	*t_string;

struct s_string {
	t_i8	*content;
	int		start;
	int		end;
	int		length;
	int		max_length;
};

// t_type		string(void);
// t_string	string_create(void);
// void		string_destroy(t_string instance);
// t_string	string_copy(t_string instance);
// t_string	string_init(t_string instance, t_any value);

#endif