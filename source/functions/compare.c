/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:34:52 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/04 15:19:14 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

t_i32	compare(t_any instance, t_any another_instance)
{
	assert(instance->type->compare != NULL);
	return (instance->type->compare(instance, another_instance));
}
