/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memtree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 23:42:47 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/16 09:25:20 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMTREE_H
# define MEMTREE_H

// -- Everything here is dynamic allocated. The whole tree with nodes and such. 
// -- If something goes wrong in that process memtree will destroy itself and
// -- the program terminates.

# include "type.h"

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_memtree		*t_memtree;

struct s_memtree {
	t_memtree		ltree;
	t_memtree		rtree;
	void *			address;
	t_type			type;
	int				height;
};

t_memtree	*memtree_get(void);
t_memtree	memtree_create(t_type type, void *address);
void		memtree_destroy(void);
void		memtree_insert(t_type type, void *address);
void		memtree_delete(void *address);
void		memtree_rebalance(t_memtree *memtree);
void		memtree_update_height(t_memtree memtree);
int			memtree_get_height(t_memtree memtree);
t_type		memtree_search(void *address);
// void		memtree_print(void);

#endif