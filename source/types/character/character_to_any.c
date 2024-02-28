/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character_to_any.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:08:12 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 13:39:26 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "character.h"

t_any	character_to_any(t_character instance)
{
	t_any	new_instance;

	new_instance = create(any);
	new_instance->type = character();
	new_instance->value.i8 = *instance;
	return (new_instance);
}
