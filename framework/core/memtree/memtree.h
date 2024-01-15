/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memtree.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:36:23 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/15 15:34:03 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMTREE_H
# define MEMTREE_H

# include <stdlib.h>
# include <unistd.h>

typedef void				*t_any;
typedef struct s_memtree	*t_memtree;

struct s_memtree {
	t_memtree	left_child;
	t_memtree	right_child;
	t_any		address;
	int			height;
};

t_memtree	memtree_get(void);

t_memtree	memtree_create(t_any address);
void		memtree_destroy(t_memtree memtree);
void		memtree_insert(t_memtree memtree, t_any address);
void		memtree_delete(t_memtree memtree, t_any address);
int			memtree_search(t_memtree memtree, t_any address);
int			memtree_get_height(t_memtree memtree);
void		memtree_fix_height(t_memtree memtree);
void		memtree_left_rotate(t_memtree memtree);
void		memtree_right_rotate(t_memtree memtree);
void		memtree_rebalance(t_memtree memtree);

#endif