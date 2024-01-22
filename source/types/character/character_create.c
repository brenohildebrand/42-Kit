/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:12:14 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 11:33:18 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "character.h"

t_character	character_create(void)
{
	t_character	c;

	c = (t_character)new(character);
	*c = '\0';
	return (c);
}
