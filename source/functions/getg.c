/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getg.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:09:29 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 19:01:51 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "framework.h"

t_any	getg(t_any key)
{
	t_table	gtable;

	gtable = framework_get_gtable();
	return (table_get(gtable, key));
}
