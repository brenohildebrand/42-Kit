/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:21:38 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/07 14:23:43 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int.h"

t_int	int_add(t_int a, t_int b)
{
	t_int	new_instance;

	new_instance = int_build(int_get_value(a) + int_get_value(b));
	return (new_instance);
}
