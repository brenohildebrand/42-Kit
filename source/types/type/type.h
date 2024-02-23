/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 02:09:13 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 18:49:18 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_H
# define TYPE_H

typedef struct s_type	*t_type;

struct s_type {
	char			*name;
	unsigned int	size;
	void			*(*create)(void);
	void			(*destroy)(void *);
	void			*(*init)(void *, t_any);
	void			*(*copy)(void *);
	t_any			(*get)(void *, t_any);
	void			(*set)(void *, t_any, t_any);
	void			(*push)(void *, t_any);
	t_any			(*pop)(void *);
};

#endif