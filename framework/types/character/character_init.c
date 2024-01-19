/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:14:17 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 11:15:58 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "character.h"

void	character_init(t_character character, char value)
{
	*character = value;
}
