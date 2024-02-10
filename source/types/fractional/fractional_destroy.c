/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractional_destroy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 00:07:00 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/10 00:07:35 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractional.h"

void	fractional_destroy(t_fractional fractional)
{
	delete(fractional);
}
