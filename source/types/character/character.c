/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:06:39 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/25 19:07:21 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "character.h"

t_type	character(void)
{
	static struct s_type	type = {
		.name = "character",
		.size = sizeof(char)
	};

	return (&type);
}