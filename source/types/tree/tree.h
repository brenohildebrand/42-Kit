/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:53:28 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/25 14:56:39 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TREE_H
# define TREE_H

typedef struct s_tree		*t_tree;
typedef struct s_tree_node	*t_tree_node;

struct s_tree {
	t_tree_node	root;
	int			height;
};

struct s_tree_node {
	t_tree_node	parent;
	t_tree_node	children;
	int			length;
	int			max_length;
};

#endif