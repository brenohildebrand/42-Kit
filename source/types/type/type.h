/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 02:09:13 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 02:10:52 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_H
# define TYPE_H

typedef struct s_type			*t_type;

struct s_type {
	char			*name;
	void			*(*create)(t_any value);
	void			(*destroy)(void *);
	void			(*push)(t_any value);
	unsigned int	size;
};

#endif