/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_to_any.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:21:16 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 16:25:16 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_any	list_to_any(t_list instance)
{
	t_any	converted_instance;

	converted_instance = create(any);
	converted_instance->type = list();
	converted_instance->value.instance = instance;
	return (converted_instance);
}
