/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 22:15:08 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 01:34:15 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TABLE_H
# define TABLE_H

# include "collections.h"

typedef struct s_table			*t_table;
typedef struct s_table_entry	*t_table_entry;

struct s_table {
	t_table_entry	*entries;
	int				length;
	int				max_length;
};

struct s_table {
	t_any	key;
	t_any	value;
};

t_type	table(void);
void	table_create(void);
void	table_destroy(t_table instance);
void	table_copy(t_table instancce);
int		table_hash(t_any key);
void	table_set(t_table instance, t_any key, t_any value);
void	table_get(t_table instance, t_any value);

#endif