/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   framework.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:47:26 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:04:06 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAMEWORK_H
# define FRAMEWORK_H

# include "table.h"

typedef struct s_framework	t_framework;

struct s_framework {
	t_memtree	memtree;
	t_table		gtable;
};

t_memtree	framework_get_memtree();
t_table		framework_get_gtable();

#endif