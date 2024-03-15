/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   framework.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:47:26 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/13 16:30:29 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAMEWORK_H
# define FRAMEWORK_H

// -- Default standard headers.
# include <stdlib.h>
# include <unistd.h>

// -- Definitions
# define TRUE (1)
# define FALSE (0)

// -- Declarations for the essential types.
// -- Memtree
typedef struct s_memtree	*t_memtree;
struct						s_memtree;

// -- Any
typedef struct s_any		*t_any;
union						u_any;
struct						s_any;

// -- Type
typedef struct s_type		*t_type;
struct						s_type;

// -- Map
typedef struct s_map		*t_map;
struct						s_map;

typedef struct s_framework	*t_framework;

struct s_framework {
	t_memtree	memtree;
	// t_map		map;
};

void		framework_setup(void);
void		framework_teardown(void);
t_framework	framework_get(void);

#endif