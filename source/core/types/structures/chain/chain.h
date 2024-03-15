/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 01:02:12 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/14 19:32:35 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAIN_H
# define CHAIN_H

typedef struct s_chain		*t_chain;
typedef struct s_chain_node	*t_chain_node;

struct s_chain {
	t_chain_node	head;
	t_chain_node	tail;
	t_i32			size;
	t_i32			length;
};

struct s_chain_node {
	t_any			value;
	t_chain_node	next;
	t_chain_node	previous;
};

t_type			chain(void);
t_chain			chain_create(void);
void			chain_destroy(t_chain instance);
t_chain			chain_copy(t_chain instance);

t_type			chain_node(void);
t_chain_node	chain_node_create(void);
t_chain_node	chain_node_copy(t_chain_node instance);

#endif