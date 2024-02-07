/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:04:00 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/07 20:37:00 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_H
# define TYPE_H

# include "any.h"

typedef struct s_type	*t_type;

struct s_type {
	void			(*destroy)(t_any);
	unsigned int	size;
};

#endif