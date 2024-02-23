/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setg.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:36:17 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 18:08:58 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "framework.h"

void	setg(t_any key, t_any value)
{
	t_table	gtable;

	gtable = framework_get_gtable();
	table_set(gtable, key, value);
}
