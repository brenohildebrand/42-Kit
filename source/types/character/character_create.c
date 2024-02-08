/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:12:14 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/07 23:51:02 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "character.h"

t_character	character_create(char value)
{
	static struct s_type	type = {
		.destroy = (void (*)(t_any))character_destroy,
		.size = sizeof(char)
	};
	t_character				character;

	character = (t_character)new(&type);
	character->value = value;
	return (character);
}
