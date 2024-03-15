/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 03:00:55 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/15 16:27:05 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
# define MEMORY_H

/**
 * 	-- Purpose --
 *
 * 	The memory module is responsible for managing memory allocation and
 * 	deallocation safely. It is also responsible for keeping track of the types
 *  associated with each allocated block.
 * 
 * 	-- Usage --
 * 
 * 	The memory module provides two primary functions: 'allocate' and 
 * 	'deallocate'. That's all you need from here.
 * 
 * 	-- Notes --
 * 
 * 	> Under the hood it's a self balanced binary tree.
 * 	> Beware that you should use the 'new' and 'delete' functions instead of
 * 	  'allocate' and 'deallocate' when creating and destroying types.
 * 	> If anything goes wrong here, the module will free every allocated memory
 *	  and exit the program.
*/

#  include <stdlib.h>

void	*allocate(unsigned int size);
void	deallocate(void *address);

# ifdef FRAMEWORK

typedef struct s_type		*t_type;
struct						s_type;

typedef struct s_memtree	*t_memtree;

struct s_memtree {
	t_memtree		ltree;
	t_memtree		rtree;
	void			*address;
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

# endif

#endif