/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 22:15:08 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 23:48:13 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

typedef struct s_map			*t_map;
typedef struct s_map_entry		*t_map_entry;

struct s_map {
	struct s_map_entry	*entries;
	int					length;
	int					max_length;
};

struct s_map_entry {
	t_any	key;
	t_any	value;
};

t_type	map(void);
t_map	map_create(void);
void	map_destroy(t_map instance);
t_map	map_copy(t_map instancce);
void	map_expand(t_map instance);
int		map_hash(t_any key);
void	map_set(t_map instance, t_any key, t_any value);
t_any	map_get(t_map instance, t_any value);

#endif