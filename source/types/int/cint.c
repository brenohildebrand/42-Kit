/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cint.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:05:54 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 17:49:49 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cint.h"

t_type	cint(void)
{
	static struct s_type type = {
		.name = "cint",
		.size = sizeof(int)
	};
	
	return (&type);
}
