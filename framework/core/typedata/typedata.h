/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typedata.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:04:00 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 01:55:55 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPEDATA_H
# define TYPEDATA_H

typedef void				*t_any;
typedef struct s_typedata	*t_typedata;

typedef unsigned int		t_typecode;
typedef (*create)(void)		t_typecreate;
typedef (*destroy)(t_any)	t_typedestroy;
typedef unsigned int		t_typesize;

struct s_typedata {
	t_typecode		code;
	t_typecreate	create;
	t_typedestroy	destroy;
	t_typesize		size;
};

#endif