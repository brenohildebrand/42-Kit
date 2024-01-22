/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character_destroy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:13:12 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 11:16:00 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "character.h"

void	character_destroy(t_character character)
{
	delete(character);
}
