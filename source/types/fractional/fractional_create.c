/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractional_create.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 23:48:01 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/07 23:50:47 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractional.h"

t_fractional	fractional_create(double value)
{
	static struct s_type	type = {
		.destroy = (void (*)(t_any))fractional_destroy,
		.size = sizeof(struct s_fractional)
	};
	t_fractional			fractional;

	fractional = (t_fractional)new(&type);
	fractional->value = value;
	return (fractional);
}
