/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character_build.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 22:57:36 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 22:58:52 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "character.h"

t_character	character_build(char value)
{
	t_character	type;

	type = character_create();
	character_init(type, value);
	return (type);
}
