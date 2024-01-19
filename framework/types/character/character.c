/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:05:12 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 11:12:07 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "character.h"

t_typedata	character(void)
{
	static struct s_typedata	character_typedata = {
		.create = (t_any (*)(void))character_create,
		.destroy = (void (*)(t_any))character_destroy,
		.size = sizeof(char)
	};

	return (&character_typedata);
}
