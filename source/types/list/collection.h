/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collection.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 22:26:26 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 18:11:19 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// -- Collection
// -- Represents a collection of anything. Under the hood it's a dynamic arrray
// -- that can hold any type, including multiple different types.

#ifndef COLLECTION_H
# define COLLECTION_H

typedef struct s_collection	*t_collection;

struct s_collection {
	t_any	*content;
	int		start;
	int		end;
	int		length;
	int		max_length;
};

t_type			collection(void);
t_collection	collection_create(void);
void			collection_destroy(t_collection collection);
t_collection	collection_copy(t_collection collection);
t_any			collection_get(t_collection collection, int index);
void			collection_set(t_collection collection, int index, t_any value);
void			collection_push(t_collection collection, t_any value);
t_any			collection_pop(t_collection collection);
void			collection_unshift(t_collection collection, t_any value);
t_any			collection_shift(t_collection collection);
void			collection_expand(t_collection collection);
void			collection_reverse(t_collection collection);
int				collection_get_length(t_collection collection);
t_any			collection_to_any(t_collection instance);

// map
// filter
// reduce
// foreach
// take
// drop
// zip

#endif