/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typemap.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:30:45 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 01:26:29 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPEMAP_H
# define TYPEMAP_H

/* You should insert an entry for each type as you create them. Is it an 
overhead? Sure! But that's a choice I made. */

/* The typemap gives us the feature of using any type in any data structure. 
Imagining using a vector with multiple types in it. Now imagine destroying it
and freeing every type stored in it. What if one of these types is a tree? In
order to destroy it you should call tree_destroy(). But how do you know it's 
a tree? With typecodes. And how do you know you should destroy it using
tree_destroy()? By using the typemap. */

/* The typemap does not allocate a thing. Everything is static. If it were to
allocate something it would do so by using the typetree. The advantage of not
allocating anything is that you won't need to destroy anything. You won't 
need to call typetree_destroy() at the end of every program. */

# include "typecode.h"
# include "typedata.h"
# include "typetree.h"

# include <unistd.h>
# include <stdlib.h>

# define TYPEMAP_MAX_ENTRIES 997

typedef struct s_typemap		*t_typemap;
typedef struct s_typemapentry	*t_typemapentry;

struct s_typemapentry {
	t_typecode	key;
	t_typedata	value;
};

struct s_typemap {
	struct s_typemapentry	entries[TYPEMAP_MAX_ENTRIES];
};

t_typemap		typemap_get(void);
unsigned int	typemap_hash(t_typecode key);
void			typemap_insert(t_typecode key, t_typedata value);
t_typedata		typemap_find(t_typecode key);
void			typemap_register(t_typedata typedata);

#endif