/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typedata.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:04:00 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 02:09:51 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPEDATA_H
# define TYPEDATA_H

/* Remember that the typecode is the address of the typedata of
each type. */

typedef void				*t_any;
typedef struct s_typedata	*t_typedata;

typedef t_any (*)(void)		t_typecreate;
typedef void (*)(t_any)		t_typedestroy;
typedef unsigned int		t_typesize;

struct s_typedata {
	t_typecreate	create;
	t_typedestroy	destroy;
	t_typesize		size;
};

#endif