/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 01:02:12 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/13 22:36:58 by bhildebr         ###   ########.fr       */
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

#endif