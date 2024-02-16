/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trillian.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 23:42:47 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/16 09:25:20 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRILLIAN_H
# define TRILLIAN_H

// -- Everything here is dynamic allocated. The whole tree with nodes and such. 
// -- If something goes wrong in that process trillian will destroy itself and
// -- the program terminates.

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef void					*t_any;
typedef struct s_type			*t_type;

struct s_type {
	char			*name;
	void			(*destroy)(t_any);
	unsigned int	size;
};

typedef struct s_trillian		*t_trillian;

struct s_trillian {
	t_trillian		ltree;
	t_trillian		rtree;
	t_any			address;
	t_type			type;
	int				height;
};

t_trillian	*trillian_get(void);
t_trillian	trillian_create(t_type type, t_any address);
void		trillian_destroy(void);
void		trillian_insert(t_type type, t_any address);
void		trillian_delete(t_any address);
void		trillian_rebalance(t_trillian *trillian);
void		trillian_update_height(t_trillian trillian);
int			trillian_get_height(t_trillian trillian);
t_type		trillian_search(t_any address);
// void		trillian_print(void);

#endif