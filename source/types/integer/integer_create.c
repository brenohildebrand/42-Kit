/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:59:40 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 11:32:50 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "integer.h"

t_integer	integer_create(void)
{
	t_integer	i;

	i = (t_integer)new(integer);
	*i = 0;
	return (i);
}