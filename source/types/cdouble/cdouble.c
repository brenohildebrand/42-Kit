/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cdouble.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:17:34 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/23 17:50:05 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cdouble.h"

t_type	cdouble(void)
{
	static struct s_type type = {
		.name = "cdouble",
		.size = sizeof(double)
	};
	
	return (&type);
}
