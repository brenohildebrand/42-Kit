/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   framework.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:47:26 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 23:35:18 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAMEWORK_H
# define FRAMEWORK_H

// -- Declarations for the essential types.
// -- Memtree
typedef struct s_memtree	*t_memtree;
struct s_memtree;

// -- Any
typedef struct s_any	*t_any;
union u_any;
struct s_any;

// -- Type
typedef struct s_type	*t_type;
struct s_type;

// -- Default standard headers.
#include <stdlib.h>
#include <unistd.h>

// -- Common resources to be used by the framework.
#include "table.h"

typedef struct s_framework	*t_framework;

struct s_framework {
	t_memtree	memtree;
	t_table		gtable;
};

t_framework	framework_get(void);
t_memtree	framework_get_memtree(void);
t_table		framework_get_gtable(void);

#endif