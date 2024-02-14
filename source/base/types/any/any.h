/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:57:01 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/13 15:43:03 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANY_H
# define ANY_H

# include "type.h"

typedef void			*t_any;
typedef struct s_type	*t_type;

struct s_type {
	char			*name;
	void			(*destroy)(t_any);
	unsigned int	size;
};

t_any	any_create(t_type type);
void	any_destroy(t_any any);

#endif