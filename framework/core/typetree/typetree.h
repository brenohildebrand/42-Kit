/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 23:42:47 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 09:31:31 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPETREE_H
# define TYPETREE_H

/* Everything here is dynamic allocated. The whole tree with nodes and such. 
If something goes wrong in that process the typetree destroys itself and
the program terminates. */

#include "typedata.h"

#include <stdlib.h>

typedef void					*t_any;
typedef struct s_typetree		*t_typetree;

struct s_typetree {
	t_typetree		ltree;
	t_typetree		rtree;
	t_any			address;
	t_typedata		typedata;
	int	height;	
};

t_typetree	*typetree_get(void);
t_typetree	typetree_create(t_typedata typedata, t_any address);
void		typetree_destroy(void);
void		typetree_insert(t_typedata typedata, t_any address);
void		typetree_delete(t_any address);
void		typetree_rebalance(t_typetree *typetree);
void		typetree_update_height(t_typetree typetree);
int			typetree_get_height(t_typetree typetree);
t_typedata	typetree_search(t_any address);

#endif