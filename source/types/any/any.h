/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:57:01 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 18:46:18 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANY_H
# define ANY_H

typedef struct s_any	*t_any;

union u_any {
	int		cint;
	double	cdouble;
	char	*cstring;
	void	*instance;
};

struct s_any {
	t_type		type;
	union u_any	value;
};

t_type	any(void);
t_any	any_create(void);
void	any_destroy(t_any instance);
t_any	any_copy(t_any instance);

#endif