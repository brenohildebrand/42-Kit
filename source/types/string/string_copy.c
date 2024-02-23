/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_copy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:57:44 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 18:00:37 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

// -- TODO: fix copy content ... max_length may be different

static void	copy_content(t_string instance, t_string new_instance)
{
	int	i;

	i = 0;
	while (i < instance->max_length)
	{
		new_instance->content[i] = instance->content[i];
		i++;
	}
}

t_string	string_copy(t_string instance)
{
	t_string	new_instance;

	new_instance = create(string);
	copy_content(instance, new_instance);
	new_instance->length = instance->length;
	new_instance->max_length = instance->max_length;
}
