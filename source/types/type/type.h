/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 02:09:13 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 18:18:41 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_H
# define TYPE_H

typedef struct s_type			*t_type;

struct s_type {
	char			*name;
	void			*(*create)(t_any);
	void			(*destroy)(void *);
	void			*(*copy)(void *);
	void			*(*init)(t_any);
	void			(*push)(void *, t_any);
	unsigned int	size;
};

#endif