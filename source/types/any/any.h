/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:57:01 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/25 19:11:32 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANY_H
# define ANY_H

typedef struct s_any	*t_any;

union u_any {
	char			cchar;
	int				cint;
	long long int	cllint;
	double			cdouble;
	char			*cstring;
	void			*instance;
};

struct s_any {
	t_type		type;
	union u_any	value;
};

t_type			any(void);
t_any			any_create(void);
void			any_destroy(t_any instance);
t_any			any_copy(t_any instance);
char			any_to_char(t_any instance);
int				any_to_int(t_any instance);
long long int	any_to_llint(t_any instance);
double			any_to_double(t_any instance);
char			*any_to_cstring(t_any instance);
void			*any_to_instance(t_any instance);

#endif